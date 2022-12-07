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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Fila
{
public:
    QLabel *label;
    QPushButton *btn_voltarFila;
    QFrame *LINHAGUIA_4;
    QFrame *LINHAGUIA_3;
    QFrame *LINHAGUIA_5;
    QFrame *LINHAGUIA_2;
    QFrame *LINHAGUIA;

    void setupUi(QDialog *Fila)
    {
        if (Fila->objectName().isEmpty())
            Fila->setObjectName("Fila");
        Fila->resize(1920, 1080);
        Fila->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 180, 159)"));
        label = new QLabel(Fila);
        label->setObjectName("label");
        label->setGeometry(QRect(1190, 140, 61, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(25);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        btn_voltarFila = new QPushButton(Fila);
        btn_voltarFila->setObjectName("btn_voltarFila");
        btn_voltarFila->setGeometry(QRect(100, 50, 50, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(16);
        font1.setBold(true);
        btn_voltarFila->setFont(font1);
        btn_voltarFila->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarFila->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));
        LINHAGUIA_4 = new QFrame(Fila);
        LINHAGUIA_4->setObjectName("LINHAGUIA_4");
        LINHAGUIA_4->setGeometry(QRect(0, 720, 1920, 1));
        LINHAGUIA_4->setFrameShape(QFrame::HLine);
        LINHAGUIA_4->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_3 = new QFrame(Fila);
        LINHAGUIA_3->setObjectName("LINHAGUIA_3");
        LINHAGUIA_3->setGeometry(QRect(0, 360, 1920, 1));
        LINHAGUIA_3->setFrameShape(QFrame::HLine);
        LINHAGUIA_3->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_5 = new QFrame(Fila);
        LINHAGUIA_5->setObjectName("LINHAGUIA_5");
        LINHAGUIA_5->setGeometry(QRect(0, 540, 1920, 1));
        LINHAGUIA_5->setFrameShape(QFrame::HLine);
        LINHAGUIA_5->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_2 = new QFrame(Fila);
        LINHAGUIA_2->setObjectName("LINHAGUIA_2");
        LINHAGUIA_2->setGeometry(QRect(1220, 0, 1, 1080));
        LINHAGUIA_2->setFrameShape(QFrame::VLine);
        LINHAGUIA_2->setFrameShadow(QFrame::Sunken);
        LINHAGUIA = new QFrame(Fila);
        LINHAGUIA->setObjectName("LINHAGUIA");
        LINHAGUIA->setGeometry(QRect(520, 0, 1, 1080));
        LINHAGUIA->setFrameShape(QFrame::VLine);
        LINHAGUIA->setFrameShadow(QFrame::Sunken);

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
