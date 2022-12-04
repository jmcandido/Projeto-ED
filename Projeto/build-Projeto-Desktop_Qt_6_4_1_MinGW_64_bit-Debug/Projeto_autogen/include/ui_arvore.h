/********************************************************************************
** Form generated from reading UI file 'arvore.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARVORE_H
#define UI_ARVORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Arvore
{
public:
    QLabel *label;
    QPushButton *btn_voltarArv;

    void setupUi(QDialog *Arvore)
    {
        if (Arvore->objectName().isEmpty())
            Arvore->setObjectName("Arvore");
        Arvore->resize(1920, 1080);
        Arvore->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        label = new QLabel(Arvore);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 49, 16));
        btn_voltarArv = new QPushButton(Arvore);
        btn_voltarArv->setObjectName("btn_voltarArv");
        btn_voltarArv->setGeometry(QRect(100, 50, 50, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        btn_voltarArv->setFont(font);
        btn_voltarArv->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarArv->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(Arvore);
        QObject::connect(btn_voltarArv, &QPushButton::clicked, Arvore, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Arvore);
    } // setupUi

    void retranslateUi(QDialog *Arvore)
    {
        Arvore->setWindowTitle(QCoreApplication::translate("Arvore", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Arvore", "Arvore", nullptr));
        btn_voltarArv->setText(QCoreApplication::translate("Arvore", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Arvore: public Ui_Arvore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARVORE_H
