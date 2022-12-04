/********************************************************************************
** Form generated from reading UI file 'fila.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILA_H
#define UI_FILA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Fila
{
public:
    QLabel *label;
    QPushButton *btn_voltarFila;

    void setupUi(QDialog *Fila)
    {
        if (Fila->objectName().isEmpty())
            Fila->setObjectName("Fila");
        Fila->resize(1920, 1080);
        Fila->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        label = new QLabel(Fila);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 49, 16));
        btn_voltarFila = new QPushButton(Fila);
        btn_voltarFila->setObjectName("btn_voltarFila");
        btn_voltarFila->setGeometry(QRect(100, 50, 50, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        btn_voltarFila->setFont(font);
        btn_voltarFila->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarFila->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(Fila);
        QObject::connect(btn_voltarFila, &QPushButton::clicked, Fila, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Fila);
    } // setupUi

    void retranslateUi(QDialog *Fila)
    {
        Fila->setWindowTitle(QCoreApplication::translate("Fila", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Fila", "Fila", nullptr));
        btn_voltarFila->setText(QCoreApplication::translate("Fila", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fila: public Ui_Fila {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILA_H
