/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_sair;
    QPushButton *btn_listaSeq;
    QPushButton *btn_listaEnc;
    QPushButton *btn_pilha;
    QPushButton *btn_fila;
    QPushButton *btn_arvore;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_sair = new QPushButton(centralwidget);
        btn_sair->setObjectName("btn_sair");
        btn_sair->setGeometry(QRect(1820, 50, 50, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        btn_sair->setFont(font);
        btn_sair->setCursor(QCursor(Qt::PointingHandCursor));
        btn_sair->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        btn_listaSeq = new QPushButton(centralwidget);
        btn_listaSeq->setObjectName("btn_listaSeq");
        btn_listaSeq->setGeometry(QRect(170, 390, 300, 300));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(12);
        btn_listaSeq->setFont(font1);
        btn_listaSeq->setCursor(QCursor(Qt::PointingHandCursor));
        btn_listaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        btn_listaSeq->setAutoDefault(false);
        btn_listaSeq->setFlat(false);
        btn_listaEnc = new QPushButton(centralwidget);
        btn_listaEnc->setObjectName("btn_listaEnc");
        btn_listaEnc->setGeometry(QRect(490, 390, 300, 300));
        btn_listaEnc->setFont(font1);
        btn_listaEnc->setCursor(QCursor(Qt::PointingHandCursor));
        btn_listaEnc->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        btn_pilha = new QPushButton(centralwidget);
        btn_pilha->setObjectName("btn_pilha");
        btn_pilha->setGeometry(QRect(810, 390, 300, 300));
        btn_pilha->setFont(font1);
        btn_pilha->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pilha->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        btn_fila = new QPushButton(centralwidget);
        btn_fila->setObjectName("btn_fila");
        btn_fila->setGeometry(QRect(1130, 390, 300, 300));
        btn_fila->setFont(font1);
        btn_fila->setCursor(QCursor(Qt::PointingHandCursor));
        btn_fila->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        btn_arvore = new QPushButton(centralwidget);
        btn_arvore->setObjectName("btn_arvore");
        btn_arvore->setGeometry(QRect(1450, 390, 300, 300));
        btn_arvore->setFont(font1);
        btn_arvore->setCursor(QCursor(Qt::PointingHandCursor));
        btn_arvore->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_sair, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        btn_listaSeq->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_sair->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_listaSeq->setText(QCoreApplication::translate("MainWindow", "LISTA SEQUENCIAL", nullptr));
        btn_listaEnc->setText(QCoreApplication::translate("MainWindow", "LISTA ENCADEADA", nullptr));
        btn_pilha->setText(QCoreApplication::translate("MainWindow", "PILHA", nullptr));
        btn_fila->setText(QCoreApplication::translate("MainWindow", "FILA", nullptr));
        btn_arvore->setText(QCoreApplication::translate("MainWindow", "\303\201RVORE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
