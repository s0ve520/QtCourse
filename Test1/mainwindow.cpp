#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include <QAbstractButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    digitBTNs = {{Qt::Key_0,ui->btnNum_0},
            {Qt::Key_1,ui->btnNum_1},
            {Qt::Key_2,ui->btnNum_2},
            {Qt::Key_3,ui->btnNum_3},
            {Qt::Key_4,ui->btnNum_4},
            {Qt::Key_5,ui->btnNum_5},
            {Qt::Key_6,ui->btnNum_6},
            {Qt::Key_7,ui->btnNum_7},
            {Qt::Key_8,ui->btnNum_8},
            {Qt::Key_9,ui->btnNum_9},
                 };
    foreach(auto btn,digitBTNs)
        connect(btn,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    connect(ui->btnPlus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMultiply,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMinus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnDivide,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnSquare,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnGrade,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnSqrt,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnPercentage,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
    this->setWindowTitle("计算器2022414040143张毅帆");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//计算
QString MainWindow::calculation(bool *ok)
{
    double result = 0;
    if(operands.size()==2 && opcodes.size()     > 0){
        //取操作数
        double operand1 = operands.front().toDouble();
        operands.pop_front();
        double operand2 = operands.front().toDouble();
        operands.pop_front();

        //取操作符
        QString op = opcodes.front();
        opcodes.pop_front();

        if(op=="＋"){
            result = operand1 + operand2;
        }
        else if(op == "-"){
            result = operand1 - operand2;
        }
        else if(op == "×"){
            result = operand1 * operand2;
        }
        else if(op == "÷"){
            result = operand1 / operand2;
        }
        ui->statusbar->showMessage(QString("计算成功! operands is %1,opcodes is %2").arg(operands.size()).arg(opcodes.size()));
    }
    else {
        ui->statusbar->showMessage(QString("operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    }
    return QString::number(result);
}

//数字键盘点击槽函数
void MainWindow::btnNumClicked()
{
    QString digit = qobject_cast<QPushButton*>(sender())->text();
    //输入0
    if(digit =="0" && operand == "0"){
        digit = "";
    }
    if(digit !="0" && operand == "0"){
        operand ="";
    }
    operand += digit;
    ui->display->setText(operand);
}

//小数点槽函数
void MainWindow::on_btnPoint_clicked()
{
    if(!operand.contains(".")){
        operand+=qobject_cast<QPushButton*>(sender())->text();
        ui->display->setText(operand);
    }
}

//回退键操作槽函数
void MainWindow::on_btnDelete_clicked()
{
    operand = operand.left(operand.length()-1);
    ui->display->setText(operand);
}


//Clear
void MainWindow::on_btnC_clicked()
{
    operands.clear();
    opcodes.clear();
    operand.clear();
    opcode.clear();
    ui->statusbar->showMessage(QString("operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    ui->display->setText(operand);
}


//双操作数操作符槽函数
void MainWindow::btnBinaryOperatorClicked()
{
    QString opcode = qobject_cast<QPushButton*>(sender())->text();
    if(operand!=""){
        operands.push_back(operand);
        operand = "";
        opcodes.push_back(opcode);
        QString result = calculation();
        ui->display->setText(result);
        operand =result;
    }
}

//单操作数操作符槽函数
void MainWindow::btnUnaryOperatorClicked()
{
    if(operand != ""){
        double result = operand.toDouble();
        operand = "";
        QString opcode = qobject_cast<QPushButton*>(sender())->text();
        if (opcode == "x²"){
            result = (result*result);
        }
        else if(opcode == "1/x"){
            result = (1/result);
            ui->statusbar->showMessage("1/x被点击!");
        }
        else if(opcode == "%"){
            result /= 100.0;
        }
        else if(opcode == "√"){
            result = sqrt(result);
        }

        ui->display->setText(QString::number(result));
    }
}


//等于号操作槽函数
void MainWindow::on_btnEqual_clicked()
{
    if(operand != ""){
        operands.push_back(operand);
        operand = "";
    }
    QString result = calculation();

    ui->display->setText(result);
}


//正负号
void MainWindow::on_btnPlusOrMinus_clicked()
{
    if(operand != ""){
        double num = operand.toDouble();
        num = -num;
        operand = QString::number(num);
        ui->display->setText(operand);
    }
}

//键盘事件
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    foreach (auto btnKey ,digitBTNs.keys()) {
        if(event->key() == btnKey){
            digitBTNs[btnKey]->animateClick();
        }
    }
}

