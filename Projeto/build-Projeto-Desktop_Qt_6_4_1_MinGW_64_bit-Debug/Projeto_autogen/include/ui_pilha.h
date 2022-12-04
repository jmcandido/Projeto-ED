/********************************************************************************
** Form generated from reading UI file 'pilha.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PILHA_H
#define UI_PILHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_btn_voltarPilha
{
public:
    QLabel *label;
    QPushButton *btn_sair;

    void setupUi(QDialog *btn_voltarPilha)
    {
        if (btn_voltarPilha->objectName().isEmpty())
            btn_voltarPilha->setObjectName("btn_voltarPilha");
        btn_voltarPilha->resize(1920, 1080);
        btn_voltarPilha->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        label = new QLabel(btn_voltarPilha);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 49, 16));
        btn_sair = new QPushButton(btn_voltarPilha);
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

        retranslateUi(btn_voltarPilha);
        QObject::connect(btn_sair, &QPushButton::clicked, btn_voltarPilha, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(btn_voltarPilha);
    } // setupUi

    void retranslateUi(QDialog *btn_voltarPilha)
    {
        btn_voltarPilha->setWindowTitle(QCoreApplication::translate("btn_voltarPilha", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("btn_voltarPilha", "Pilha", nullptr));
        btn_sair->setText(QCoreApplication::translate("btn_voltarPilha", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class btn_voltarPilha: public Ui_btn_voltarPilha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILHA_H
