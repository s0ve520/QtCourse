#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStack>
#include <QKeyEvent>
#include <QMainWindow>
#include <QMap>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString operand;
    QString opcode;
    QMap<int,QPushButton*>digitBTNs;
    QStack<QString> operands;
    QStack<QString> opcodes;

    QString calculation(bool *ok = NULL);

private slots:
    void btnNumClicked();

    void btnBinaryOperatorClicked();

    void btnUnaryOperatorClicked();

    void on_btnPoint_clicked();

    void on_btnDelete_clicked();

    void on_btnC_clicked();

    void on_btnEqual_clicked();

    void on_btnPlusOrMinus_clicked();

    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
