/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *downloadButton;
    QPushButton *downloadButton_2;
    QPushButton *pushButton;
    QPushButton *downloadButton_3;
    QPushButton *pushButton_2;
    QPushButton *downloadButton_4;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(715, 385);
        MainWindow->setMinimumSize(QSize(715, 385));
        MainWindow->setMaximumSize(QSize(715, 385));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #555;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        downloadButton = new QPushButton(centralwidget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(10, 10, 41, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Bengali UI"));
        font.setBold(true);
        font.setWeight(75);
        downloadButton->setFont(font);
        downloadButton->setCursor(QCursor(Qt::PointingHandCursor));
        downloadButton->setStyleSheet(QString::fromUtf8("color: rgb(16, 255, 24);\n"
"background-color: #444;\n"
"border-color: #444;\n"
"border-radius: 15px;"));
        downloadButton_2 = new QPushButton(centralwidget);
        downloadButton_2->setObjectName(QString::fromUtf8("downloadButton_2"));
        downloadButton_2->setGeometry(QRect(80, 330, 131, 31));
        downloadButton_2->setFont(font);
        downloadButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        downloadButton_2->setStyleSheet(QString::fromUtf8("color: rgb(16, 255, 24);\n"
"background-color: #444;\n"
"border-color: #444;\n"
"border-radius: 15px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 330, 101, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(195, 195, 195);\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(108, 255, 129, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-radius: 15px;"));
        downloadButton_3 = new QPushButton(centralwidget);
        downloadButton_3->setObjectName(QString::fromUtf8("downloadButton_3"));
        downloadButton_3->setGeometry(QRect(80, 290, 131, 31));
        downloadButton_3->setFont(font);
        downloadButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        downloadButton_3->setStyleSheet(QString::fromUtf8("color: rgb(16, 255, 24);\n"
"background-color: #444;\n"
"border-color: #444;\n"
"border-radius: 15px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 290, 101, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(195, 195, 195);\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(238, 108, 255, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-radius: 15px;"));
        downloadButton_4 = new QPushButton(centralwidget);
        downloadButton_4->setObjectName(QString::fromUtf8("downloadButton_4"));
        downloadButton_4->setGeometry(QRect(0, 250, 141, 31));
        downloadButton_4->setFont(font);
        downloadButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        downloadButton_4->setStyleSheet(QString::fromUtf8("color: rgb(16, 255, 24);\n"
"background-color: #444;\n"
"border-color: #444;\n"
" border-bottom-right-radius: 15px;\n"
"opacity: 0.1;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 220, 141, 31));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(195, 195, 195);\n"
"background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 225, 108, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
" border-top-right-radius: 15px;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AIBS", nullptr));
        downloadButton->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        downloadButton_2->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "gideon", nullptr));
        downloadButton_3->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Impulse", nullptr));
        downloadButton_4->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Wig", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
