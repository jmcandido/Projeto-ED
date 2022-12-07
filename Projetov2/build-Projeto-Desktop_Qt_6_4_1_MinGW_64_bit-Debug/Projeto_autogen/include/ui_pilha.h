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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pilha
{
public:
    QLabel *lbl_titulo_pilha;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_adicionar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_valor_adicionar;
    QLineEdit *txt_valor_adicionar;
    QPushButton *btn_adicionar;
    QLabel *lbl_remover;
    QPushButton *btn_remover;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_p10;
    QLabel *lbl_p9;
    QLabel *lbl_p8;
    QLabel *lbl_p7;
    QLabel *lbl_p6;
    QLabel *lbl_p5;
    QLabel *lbl_p4;
    QLabel *lbl_p3;
    QLabel *lbl_p2;
    QLabel *lbl_p1;
    QPushButton *btn_voltarPilha;
    QLabel *lbl_quantidade_pilha;
    QFrame *LINHAGUIA_2;
    QFrame *LINHAGUIA;
    QFrame *LINHAGUIA_4;
    QFrame *LINHAGUIA_3;
    QFrame *LINHAGUIA_5;
    QPushButton *btn_resetar;

    void setupUi(QDialog *Pilha)
    {
        if (Pilha->objectName().isEmpty())
            Pilha->setObjectName("Pilha");
        Pilha->resize(1920, 1080);
        Pilha->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 180, 159)"));
        lbl_titulo_pilha = new QLabel(Pilha);
        lbl_titulo_pilha->setObjectName("lbl_titulo_pilha");
        lbl_titulo_pilha->setGeometry(QRect(1175, 140, 95, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(25);
        lbl_titulo_pilha->setFont(font);
        lbl_titulo_pilha->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_titulo_pilha->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(Pilha);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 370, 231, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_adicionar = new QLabel(layoutWidget);
        lbl_adicionar->setObjectName("lbl_adicionar");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(16);
        lbl_adicionar->setFont(font1);
        lbl_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_adicionar->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_adicionar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl_valor_adicionar = new QLabel(layoutWidget);
        lbl_valor_adicionar->setObjectName("lbl_valor_adicionar");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font2.setPointSize(14);
        lbl_valor_adicionar->setFont(font2);
        lbl_valor_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lbl_valor_adicionar);

        txt_valor_adicionar = new QLineEdit(layoutWidget);
        txt_valor_adicionar->setObjectName("txt_valor_adicionar");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_valor_adicionar->sizePolicy().hasHeightForWidth());
        txt_valor_adicionar->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font3.setPointSize(12);
        txt_valor_adicionar->setFont(font3);
        txt_valor_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));
        txt_valor_adicionar->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txt_valor_adicionar);


        verticalLayout_2->addLayout(horizontalLayout_2);

        btn_adicionar = new QPushButton(layoutWidget);
        btn_adicionar->setObjectName("btn_adicionar");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font4.setPointSize(24);
        btn_adicionar->setFont(font4);
        btn_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(btn_adicionar);

        lbl_remover = new QLabel(layoutWidget);
        lbl_remover->setObjectName("lbl_remover");
        lbl_remover->setFont(font1);
        lbl_remover->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_remover->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_remover);

        btn_remover = new QPushButton(layoutWidget);
        btn_remover->setObjectName("btn_remover");
        btn_remover->setFont(font4);
        btn_remover->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(btn_remover);

        layoutWidget1 = new QWidget(Pilha);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setEnabled(true);
        layoutWidget1->setGeometry(QRect(1170, 260, 101, 551));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_p10 = new QLabel(layoutWidget1);
        lbl_p10->setObjectName("lbl_p10");
        lbl_p10->setEnabled(true);
        lbl_p10->setFont(font2);
        lbl_p10->setStyleSheet(QString::fromUtf8(""));
        lbl_p10->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p10);

        lbl_p9 = new QLabel(layoutWidget1);
        lbl_p9->setObjectName("lbl_p9");
        lbl_p9->setEnabled(true);
        lbl_p9->setFont(font2);
        lbl_p9->setStyleSheet(QString::fromUtf8(""));
        lbl_p9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p9);

        lbl_p8 = new QLabel(layoutWidget1);
        lbl_p8->setObjectName("lbl_p8");
        lbl_p8->setEnabled(true);
        lbl_p8->setFont(font2);
        lbl_p8->setStyleSheet(QString::fromUtf8(""));
        lbl_p8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p8);

        lbl_p7 = new QLabel(layoutWidget1);
        lbl_p7->setObjectName("lbl_p7");
        lbl_p7->setEnabled(true);
        lbl_p7->setFont(font2);
        lbl_p7->setStyleSheet(QString::fromUtf8(""));
        lbl_p7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p7);

        lbl_p6 = new QLabel(layoutWidget1);
        lbl_p6->setObjectName("lbl_p6");
        lbl_p6->setEnabled(true);
        lbl_p6->setFont(font2);
        lbl_p6->setStyleSheet(QString::fromUtf8(""));
        lbl_p6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p6);

        lbl_p5 = new QLabel(layoutWidget1);
        lbl_p5->setObjectName("lbl_p5");
        lbl_p5->setEnabled(true);
        lbl_p5->setFont(font2);
        lbl_p5->setStyleSheet(QString::fromUtf8(""));
        lbl_p5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p5);

        lbl_p4 = new QLabel(layoutWidget1);
        lbl_p4->setObjectName("lbl_p4");
        lbl_p4->setEnabled(true);
        lbl_p4->setFont(font2);
        lbl_p4->setStyleSheet(QString::fromUtf8(""));
        lbl_p4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p4);

        lbl_p3 = new QLabel(layoutWidget1);
        lbl_p3->setObjectName("lbl_p3");
        lbl_p3->setEnabled(true);
        lbl_p3->setFont(font2);
        lbl_p3->setStyleSheet(QString::fromUtf8(""));
        lbl_p3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p3);

        lbl_p2 = new QLabel(layoutWidget1);
        lbl_p2->setObjectName("lbl_p2");
        lbl_p2->setEnabled(true);
        lbl_p2->setFont(font2);
        lbl_p2->setStyleSheet(QString::fromUtf8(""));
        lbl_p2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p2);

        lbl_p1 = new QLabel(layoutWidget1);
        lbl_p1->setObjectName("lbl_p1");
        lbl_p1->setEnabled(true);
        lbl_p1->setFont(font2);
        lbl_p1->setStyleSheet(QString::fromUtf8(""));
        lbl_p1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_p1);

        btn_voltarPilha = new QPushButton(Pilha);
        btn_voltarPilha->setObjectName("btn_voltarPilha");
        btn_voltarPilha->setGeometry(QRect(100, 50, 50, 30));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font5.setPointSize(16);
        font5.setBold(true);
        btn_voltarPilha->setFont(font5);
        btn_voltarPilha->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarPilha->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));
        lbl_quantidade_pilha = new QLabel(Pilha);
        lbl_quantidade_pilha->setObjectName("lbl_quantidade_pilha");
        lbl_quantidade_pilha->setGeometry(QRect(1136, 900, 171, 16));
        lbl_quantidade_pilha->setFont(font2);
        lbl_quantidade_pilha->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_quantidade_pilha->setAlignment(Qt::AlignCenter);
        LINHAGUIA_2 = new QFrame(Pilha);
        LINHAGUIA_2->setObjectName("LINHAGUIA_2");
        LINHAGUIA_2->setGeometry(QRect(1220, 0, 1, 1080));
        LINHAGUIA_2->setFrameShape(QFrame::VLine);
        LINHAGUIA_2->setFrameShadow(QFrame::Sunken);
        LINHAGUIA = new QFrame(Pilha);
        LINHAGUIA->setObjectName("LINHAGUIA");
        LINHAGUIA->setGeometry(QRect(520, 0, 1, 1080));
        LINHAGUIA->setFrameShape(QFrame::VLine);
        LINHAGUIA->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_4 = new QFrame(Pilha);
        LINHAGUIA_4->setObjectName("LINHAGUIA_4");
        LINHAGUIA_4->setGeometry(QRect(0, 720, 1920, 1));
        LINHAGUIA_4->setFrameShape(QFrame::HLine);
        LINHAGUIA_4->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_3 = new QFrame(Pilha);
        LINHAGUIA_3->setObjectName("LINHAGUIA_3");
        LINHAGUIA_3->setGeometry(QRect(0, 360, 1920, 1));
        LINHAGUIA_3->setFrameShape(QFrame::HLine);
        LINHAGUIA_3->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_5 = new QFrame(Pilha);
        LINHAGUIA_5->setObjectName("LINHAGUIA_5");
        LINHAGUIA_5->setGeometry(QRect(0, 540, 1920, 1));
        LINHAGUIA_5->setFrameShape(QFrame::HLine);
        LINHAGUIA_5->setFrameShadow(QFrame::Sunken);
        btn_resetar = new QPushButton(Pilha);
        btn_resetar->setObjectName("btn_resetar");
        btn_resetar->setGeometry(QRect(220, 670, 90, 40));
        btn_resetar->setFont(font2);
        btn_resetar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(Pilha);
        QObject::connect(btn_voltarPilha, &QPushButton::clicked, Pilha, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Pilha);
    } // setupUi

    void retranslateUi(QDialog *Pilha)
    {
        Pilha->setWindowTitle(QCoreApplication::translate("Pilha", "Dialog", nullptr));
        lbl_titulo_pilha->setText(QCoreApplication::translate("Pilha", "Pilha", nullptr));
        lbl_adicionar->setText(QCoreApplication::translate("Pilha", "Adicionar", nullptr));
        lbl_valor_adicionar->setText(QCoreApplication::translate("Pilha", "Valor", nullptr));
        btn_adicionar->setText(QCoreApplication::translate("Pilha", "+", nullptr));
        lbl_remover->setText(QCoreApplication::translate("Pilha", "Remover", nullptr));
        btn_remover->setText(QCoreApplication::translate("Pilha", "-", nullptr));
        layoutWidget1->setStyleSheet(QString());
        lbl_p10->setText(QString());
        lbl_p9->setText(QString());
        lbl_p8->setText(QString());
        lbl_p7->setText(QString());
        lbl_p6->setText(QString());
        lbl_p5->setText(QString());
        lbl_p4->setText(QString());
        lbl_p3->setText(QString());
        lbl_p2->setText(QString());
        lbl_p1->setText(QString());
        btn_voltarPilha->setText(QCoreApplication::translate("Pilha", "<", nullptr));
        lbl_quantidade_pilha->setText(QCoreApplication::translate("Pilha", "Quantidade: 0", nullptr));
        btn_resetar->setText(QCoreApplication::translate("Pilha", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pilha: public Ui_Pilha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PILHA_H
