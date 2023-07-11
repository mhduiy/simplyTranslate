/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *ed_tranFrom;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_FormAndTo;
    QPushButton *btn_paste;
    QPushButton *btn_tran;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *ed_tranTo;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_clear;
    QPushButton *btn_copy;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(553, 401);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ed_tranFrom = new QTextEdit(groupBox);
        ed_tranFrom->setObjectName(QString::fromUtf8("ed_tranFrom"));

        verticalLayout_4->addWidget(ed_tranFrom);


        horizontalLayout->addWidget(groupBox);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_FormAndTo = new QPushButton(widget);
        btn_FormAndTo->setObjectName(QString::fromUtf8("btn_FormAndTo"));

        verticalLayout->addWidget(btn_FormAndTo);

        btn_paste = new QPushButton(widget);
        btn_paste->setObjectName(QString::fromUtf8("btn_paste"));

        verticalLayout->addWidget(btn_paste);

        btn_tran = new QPushButton(widget);
        btn_tran->setObjectName(QString::fromUtf8("btn_tran"));

        verticalLayout->addWidget(btn_tran);


        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addWidget(widget_3);

        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(widget_4);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ed_tranTo = new QTextEdit(groupBox_2);
        ed_tranTo->setObjectName(QString::fromUtf8("ed_tranTo"));

        verticalLayout_5->addWidget(ed_tranTo);


        horizontalLayout_2->addWidget(groupBox_2);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn_clear = new QPushButton(widget_2);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        verticalLayout_2->addWidget(btn_clear);

        btn_copy = new QPushButton(widget_2);
        btn_copy->setObjectName(QString::fromUtf8("btn_copy"));

        verticalLayout_2->addWidget(btn_copy);


        horizontalLayout_2->addWidget(widget_2);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_3->addWidget(widget_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 553, 26));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\234\250\350\277\231\351\207\214\350\276\223\345\205\245\351\234\200\350\246\201\347\277\273\350\257\221\347\232\204\345\206\205\345\256\271", nullptr));
        btn_FormAndTo->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207->\350\213\261\346\226\207", nullptr));
        btn_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        btn_tran->setText(QCoreApplication::translate("MainWindow", "\347\277\273\350\257\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\277\273\350\257\221\347\273\223\346\236\234", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        btn_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
