/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *btnPercentage;
    QPushButton *btnEqual;
    QPushButton *btnDelete;
    QPushButton *btnPoint;
    QPushButton *btnNum_6;
    QLineEdit *display;
    QPushButton *btnNum_5;
    QPushButton *btnMultiply;
    QPushButton *btnSquare;
    QPushButton *btnNum_3;
    QPushButton *btnNum_1;
    QPushButton *btnGrade;
    QPushButton *btnNum_4;
    QPushButton *btnNum_0;
    QPushButton *btnPlusOrMinus;
    QPushButton *btnMinus;
    QPushButton *btnCE;
    QPushButton *btnNum_7;
    QPushButton *btnNum_9;
    QPushButton *btnC;
    QPushButton *btnPlus;
    QPushButton *btnDivide;
    QPushButton *btnNum_8;
    QPushButton *btnSqrt;
    QPushButton *btnNum_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(651, 433);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btnPercentage = new QPushButton(centralwidget);
        btnPercentage->setObjectName("btnPercentage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnPercentage->sizePolicy().hasHeightForWidth());
        btnPercentage->setSizePolicy(sizePolicy);
        btnPercentage->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnPercentage, 1, 0, 1, 1);

        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);
        btnEqual->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(55, 55, 55);"));

        gridLayout_2->addWidget(btnEqual, 6, 3, 1, 1);

        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnDelete, 1, 3, 1, 1);

        btnPoint = new QPushButton(centralwidget);
        btnPoint->setObjectName("btnPoint");
        sizePolicy.setHeightForWidth(btnPoint->sizePolicy().hasHeightForWidth());
        btnPoint->setSizePolicy(sizePolicy);
        btnPoint->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnPoint, 6, 2, 1, 1);

        btnNum_6 = new QPushButton(centralwidget);
        btnNum_6->setObjectName("btnNum_6");
        sizePolicy.setHeightForWidth(btnNum_6->sizePolicy().hasHeightForWidth());
        btnNum_6->setSizePolicy(sizePolicy);
        btnNum_6->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_6, 4, 2, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(display, 0, 0, 1, 4);

        btnNum_5 = new QPushButton(centralwidget);
        btnNum_5->setObjectName("btnNum_5");
        sizePolicy.setHeightForWidth(btnNum_5->sizePolicy().hasHeightForWidth());
        btnNum_5->setSizePolicy(sizePolicy);
        btnNum_5->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_5, 4, 1, 1, 1);

        btnMultiply = new QPushButton(centralwidget);
        btnMultiply->setObjectName("btnMultiply");
        sizePolicy.setHeightForWidth(btnMultiply->sizePolicy().hasHeightForWidth());
        btnMultiply->setSizePolicy(sizePolicy);
        btnMultiply->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnMultiply, 3, 3, 1, 1);

        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName("btnSquare");
        sizePolicy.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy);
        btnSquare->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnSquare, 2, 1, 1, 1);

        btnNum_3 = new QPushButton(centralwidget);
        btnNum_3->setObjectName("btnNum_3");
        sizePolicy.setHeightForWidth(btnNum_3->sizePolicy().hasHeightForWidth());
        btnNum_3->setSizePolicy(sizePolicy);
        btnNum_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_3, 5, 2, 1, 1);

        btnNum_1 = new QPushButton(centralwidget);
        btnNum_1->setObjectName("btnNum_1");
        sizePolicy.setHeightForWidth(btnNum_1->sizePolicy().hasHeightForWidth());
        btnNum_1->setSizePolicy(sizePolicy);
        btnNum_1->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_1, 5, 0, 1, 1);

        btnGrade = new QPushButton(centralwidget);
        btnGrade->setObjectName("btnGrade");
        sizePolicy.setHeightForWidth(btnGrade->sizePolicy().hasHeightForWidth());
        btnGrade->setSizePolicy(sizePolicy);
        btnGrade->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnGrade, 2, 0, 1, 1);

        btnNum_4 = new QPushButton(centralwidget);
        btnNum_4->setObjectName("btnNum_4");
        sizePolicy.setHeightForWidth(btnNum_4->sizePolicy().hasHeightForWidth());
        btnNum_4->setSizePolicy(sizePolicy);
        btnNum_4->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_4, 4, 0, 1, 1);

        btnNum_0 = new QPushButton(centralwidget);
        btnNum_0->setObjectName("btnNum_0");
        sizePolicy.setHeightForWidth(btnNum_0->sizePolicy().hasHeightForWidth());
        btnNum_0->setSizePolicy(sizePolicy);
        btnNum_0->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_0, 6, 1, 1, 1);

        btnPlusOrMinus = new QPushButton(centralwidget);
        btnPlusOrMinus->setObjectName("btnPlusOrMinus");
        sizePolicy.setHeightForWidth(btnPlusOrMinus->sizePolicy().hasHeightForWidth());
        btnPlusOrMinus->setSizePolicy(sizePolicy);
        btnPlusOrMinus->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnPlusOrMinus, 6, 0, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);
        btnMinus->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnMinus, 4, 3, 1, 1);

        btnCE = new QPushButton(centralwidget);
        btnCE->setObjectName("btnCE");
        sizePolicy.setHeightForWidth(btnCE->sizePolicy().hasHeightForWidth());
        btnCE->setSizePolicy(sizePolicy);
        btnCE->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnCE, 1, 1, 1, 1);

        btnNum_7 = new QPushButton(centralwidget);
        btnNum_7->setObjectName("btnNum_7");
        sizePolicy.setHeightForWidth(btnNum_7->sizePolicy().hasHeightForWidth());
        btnNum_7->setSizePolicy(sizePolicy);
        btnNum_7->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_7, 3, 0, 1, 1);

        btnNum_9 = new QPushButton(centralwidget);
        btnNum_9->setObjectName("btnNum_9");
        sizePolicy.setHeightForWidth(btnNum_9->sizePolicy().hasHeightForWidth());
        btnNum_9->setSizePolicy(sizePolicy);
        btnNum_9->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_9, 3, 2, 1, 1);

        btnC = new QPushButton(centralwidget);
        btnC->setObjectName("btnC");
        sizePolicy.setHeightForWidth(btnC->sizePolicy().hasHeightForWidth());
        btnC->setSizePolicy(sizePolicy);
        btnC->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnC, 1, 2, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);
        btnPlus->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnPlus, 5, 3, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);
        btnDivide->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnDivide, 2, 3, 1, 1);

        btnNum_8 = new QPushButton(centralwidget);
        btnNum_8->setObjectName("btnNum_8");
        sizePolicy.setHeightForWidth(btnNum_8->sizePolicy().hasHeightForWidth());
        btnNum_8->setSizePolicy(sizePolicy);
        btnNum_8->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_8, 3, 1, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName("btnSqrt");
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);
        btnSqrt->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);"));

        gridLayout_2->addWidget(btnSqrt, 2, 2, 1, 1);

        btnNum_2 = new QPushButton(centralwidget);
        btnNum_2->setObjectName("btnNum_2");
        sizePolicy.setHeightForWidth(btnNum_2->sizePolicy().hasHeightForWidth());
        btnNum_2->setSizePolicy(sizePolicy);
        btnNum_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Times New Roman\";\n"
""));

        gridLayout_2->addWidget(btnNum_2, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 651, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnPercentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "\357\274\235", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnNum_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        display->setStyleSheet(QCoreApplication::translate("MainWindow", "font: 16pt \"Times New Roman\";\n"
"background-color: rgb(245, 245, 245);", nullptr));
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnMultiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btnSquare->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        btnNum_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnNum_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnGrade->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnNum_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnNum_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnPlusOrMinus->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "\357\274\215", nullptr));
        btnCE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnNum_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnNum_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "\357\274\213", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btnNum_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnSqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnNum_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
