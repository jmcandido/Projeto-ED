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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Arvore
{
public:
    QLabel *label;
    QPushButton *btn_voltarArv;
    QFrame *LINHAGUIA_3;
    QFrame *LINHAGUIA_4;
    QFrame *LINHAGUIA_5;
    QFrame *LINHAGUIA;
    QFrame *LINHAGUIA_2;

    void setupUi(QDialog *Arvore)
    {
        if (Arvore->objectName().isEmpty())
            Arvore->setObjectName("Arvore");
        Arvore->resize(1920, 1080);
        Arvore->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 180, 159)"));
        label = new QLabel(Arvore);
        label->setObjectName("label");
        label->setGeometry(QRect(1090, 130, 261, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(25);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        btn_voltarArv = new QPushButton(Arvore);
        btn_voltarArv->setObjectName("btn_voltarArv");
        btn_voltarArv->setGeometry(QRect(100, 50, 50, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(16);
        font1.setBold(true);
        btn_voltarArv->setFont(font1);
        btn_voltarArv->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarArv->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));
        LINHAGUIA_3 = new QFrame(Arvore);
        LINHAGUIA_3->setObjectName("LINHAGUIA_3");
        LINHAGUIA_3->setGeometry(QRect(0, 360, 1920, 1));
        LINHAGUIA_3->setFrameShape(QFrame::HLine);
        LINHAGUIA_3->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_4 = new QFrame(Arvore);
        LINHAGUIA_4->setObjectName("LINHAGUIA_4");
        LINHAGUIA_4->setGeometry(QRect(0, 720, 1920, 1));
        LINHAGUIA_4->setFrameShape(QFrame::HLine);
        LINHAGUIA_4->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_5 = new QFrame(Arvore);
        LINHAGUIA_5->setObjectName("LINHAGUIA_5");
        LINHAGUIA_5->setGeometry(QRect(0, 540, 1920, 1));
        LINHAGUIA_5->setFrameShape(QFrame::HLine);
        LINHAGUIA_5->setFrameShadow(QFrame::Sunken);
        LINHAGUIA = new QFrame(Arvore);
        LINHAGUIA->setObjectName("LINHAGUIA");
        LINHAGUIA->setGeometry(QRect(520, 0, 1, 1080));
        LINHAGUIA->setFrameShape(QFrame::VLine);
        LINHAGUIA->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_2 = new QFrame(Arvore);
        LINHAGUIA_2->setObjectName("LINHAGUIA_2");
        LINHAGUIA_2->setGeometry(QRect(1220, 0, 1, 1080));
        LINHAGUIA_2->setFrameShape(QFrame::VLine);
        LINHAGUIA_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(Arvore);
        QObject::connect(btn_voltarArv, &QPushButton::clicked, Arvore, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Arvore);
    } // setupUi

    void retranslateUi(QDialog *Arvore)
    {
        Arvore->setWindowTitle(QCoreApplication::translate("Arvore", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Arvore", "\303\201rvore", nullptr));
        btn_voltarArv->setText(QCoreApplication::translate("Arvore", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Arvore: public Ui_Arvore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARVORE_H
