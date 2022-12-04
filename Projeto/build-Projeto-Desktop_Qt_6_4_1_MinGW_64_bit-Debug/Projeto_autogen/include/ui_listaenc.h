/********************************************************************************
** Form generated from reading UI file 'listaenc.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAENC_H
#define UI_LISTAENC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ListaEnc
{
public:
    QLabel *label;
    QPushButton *btn_voltarListaEnc;

    void setupUi(QDialog *ListaEnc)
    {
        if (ListaEnc->objectName().isEmpty())
            ListaEnc->setObjectName("ListaEnc");
        ListaEnc->resize(1920, 1080);
        ListaEnc->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        label = new QLabel(ListaEnc);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 91, 16));
        btn_voltarListaEnc = new QPushButton(ListaEnc);
        btn_voltarListaEnc->setObjectName("btn_voltarListaEnc");
        btn_voltarListaEnc->setGeometry(QRect(100, 50, 50, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        btn_voltarListaEnc->setFont(font);
        btn_voltarListaEnc->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarListaEnc->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(ListaEnc);
        QObject::connect(btn_voltarListaEnc, &QPushButton::clicked, ListaEnc, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ListaEnc);
    } // setupUi

    void retranslateUi(QDialog *ListaEnc)
    {
        ListaEnc->setWindowTitle(QCoreApplication::translate("ListaEnc", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ListaEnc", "Lista encadeada", nullptr));
        btn_voltarListaEnc->setText(QCoreApplication::translate("ListaEnc", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaEnc: public Ui_ListaEnc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAENC_H
