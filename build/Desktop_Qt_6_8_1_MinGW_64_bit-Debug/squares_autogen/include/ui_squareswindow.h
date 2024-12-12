/********************************************************************************
** Form generated from reading UI file 'squareswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQUARESWINDOW_H
#define UI_SQUARESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SquaresWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_0;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_1;
    QLabel *squaresLabel;
    QLabel *squaresShowLabel;
    QLabel *timeLabel;
    QLabel *timeShowLabel;
    QLabel *tempLabel;
    QLabel *tempShowLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SquaresWindow)
    {
        if (SquaresWindow->objectName().isEmpty())
            SquaresWindow->setObjectName("SquaresWindow");
        SquaresWindow->resize(598, 459);
        centralwidget = new QWidget(SquaresWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(40, 70, 91, 91));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 70, 91, 91));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 70, 91, 91));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(140, 170, 91, 91));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(40, 170, 91, 91));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(240, 170, 91, 91));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(140, 270, 91, 91));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(40, 270, 91, 91));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(240, 270, 91, 91));
        squaresLabel = new QLabel(centralwidget);
        squaresLabel->setObjectName("squaresLabel");
        squaresLabel->setGeometry(QRect(40, 370, 101, 16));
        squaresShowLabel = new QLabel(centralwidget);
        squaresShowLabel->setObjectName("squaresShowLabel");
        squaresShowLabel->setGeometry(QRect(40, 390, 101, 16));
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setGeometry(QRect(350, 70, 71, 16));
        timeShowLabel = new QLabel(centralwidget);
        timeShowLabel->setObjectName("timeShowLabel");
        timeShowLabel->setGeometry(QRect(350, 90, 201, 16));
        tempLabel = new QLabel(centralwidget);
        tempLabel->setObjectName("tempLabel");
        tempLabel->setGeometry(QRect(350, 120, 131, 16));
        tempShowLabel = new QLabel(centralwidget);
        tempShowLabel->setObjectName("tempShowLabel");
        tempShowLabel->setGeometry(QRect(350, 140, 141, 16));
        SquaresWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SquaresWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 598, 22));
        SquaresWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SquaresWindow);
        statusbar->setObjectName("statusbar");
        SquaresWindow->setStatusBar(statusbar);

        retranslateUi(SquaresWindow);

        QMetaObject::connectSlotsByName(SquaresWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SquaresWindow)
    {
        SquaresWindow->setWindowTitle(QCoreApplication::translate("SquaresWindow", "SquaresWindow", nullptr));
        pushButton_0->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_1->setText(QString());
        squaresLabel->setText(QCoreApplication::translate("SquaresWindow", "Squares pressed:", nullptr));
        squaresShowLabel->setText(QCoreApplication::translate("SquaresWindow", "0", nullptr));
        timeLabel->setText(QCoreApplication::translate("SquaresWindow", "Current time", nullptr));
        timeShowLabel->setText(QString());
        tempLabel->setText(QCoreApplication::translate("SquaresWindow", "Current air temperature", nullptr));
        tempShowLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SquaresWindow: public Ui_SquaresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUARESWINDOW_H
