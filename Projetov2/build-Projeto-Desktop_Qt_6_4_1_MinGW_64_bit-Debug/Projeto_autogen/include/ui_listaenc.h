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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaEnc
{
public:
    QLabel *lbl_titulo;
    QPushButton *btn_voltarListaEnc;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_le_1;
    QLabel *seta_1;
    QLabel *lbl_le_2;
    QLabel *seta_2;
    QLabel *lbl_le_3;
    QLabel *seta_3;
    QLabel *lbl_le_4;
    QLabel *seta_4;
    QLabel *lbl_le_5;
    QLabel *seta_5;
    QLabel *lbl_le_6;
    QLabel *seta_6;
    QLabel *lbl_le_7;
    QLabel *seta_7;
    QLabel *lbl_le_8;
    QLabel *seta_8;
    QLabel *lbl_le_9;
    QLabel *seta_9;
    QLabel *lbl_le_10;
    QLabel *lbl_quantidade_le;
    QFrame *LINHAGUIA;
    QFrame *LINHAGUIA_2;
    QFrame *LINHAGUIA_3;
    QFrame *LINHAGUIA_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_adicionar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_valor_adicionar;
    QLineEdit *txt_valor_adicionar;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_posicao_adicionar;
    QLineEdit *txt_posicao_adicionar;
    QPushButton *btn_adicionar;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_remover;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_posicao_remover;
    QLineEdit *txt_posicao_remover;
    QPushButton *btn_remover;
    QPushButton *btn_reset;

    void setupUi(QDialog *ListaEnc)
    {
        if (ListaEnc->objectName().isEmpty())
            ListaEnc->setObjectName("ListaEnc");
        ListaEnc->resize(1920, 1080);
        ListaEnc->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 180, 159)"));
        lbl_titulo = new QLabel(ListaEnc);
        lbl_titulo->setObjectName("lbl_titulo");
        lbl_titulo->setGeometry(QRect(1080, 140, 280, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(25);
        lbl_titulo->setFont(font);
        lbl_titulo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        lbl_titulo->setAlignment(Qt::AlignCenter);
        btn_voltarListaEnc = new QPushButton(ListaEnc);
        btn_voltarListaEnc->setObjectName("btn_voltarListaEnc");
        btn_voltarListaEnc->setGeometry(QRect(100, 50, 50, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(16);
        font1.setBold(true);
        btn_voltarListaEnc->setFont(font1);
        btn_voltarListaEnc->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarListaEnc->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));
        layoutWidget = new QWidget(ListaEnc);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(560, 500, 1321, 81));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_le_1 = new QLabel(layoutWidget);
        lbl_le_1->setObjectName("lbl_le_1");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font2.setPointSize(15);
        lbl_le_1->setFont(font2);
        lbl_le_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_1);

        seta_1 = new QLabel(layoutWidget);
        seta_1->setObjectName("seta_1");
        seta_1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seta_1->sizePolicy().hasHeightForWidth());
        seta_1->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(15);
        seta_1->setFont(font3);
        seta_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_1);

        lbl_le_2 = new QLabel(layoutWidget);
        lbl_le_2->setObjectName("lbl_le_2");
        lbl_le_2->setFont(font2);
        lbl_le_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_2);

        seta_2 = new QLabel(layoutWidget);
        seta_2->setObjectName("seta_2");
        seta_2->setEnabled(true);
        seta_2->setFont(font3);
        seta_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_2);

        lbl_le_3 = new QLabel(layoutWidget);
        lbl_le_3->setObjectName("lbl_le_3");
        lbl_le_3->setFont(font2);
        lbl_le_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_3);

        seta_3 = new QLabel(layoutWidget);
        seta_3->setObjectName("seta_3");
        seta_3->setEnabled(true);
        seta_3->setFont(font3);
        seta_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_3);

        lbl_le_4 = new QLabel(layoutWidget);
        lbl_le_4->setObjectName("lbl_le_4");
        lbl_le_4->setFont(font2);
        lbl_le_4->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_4);

        seta_4 = new QLabel(layoutWidget);
        seta_4->setObjectName("seta_4");
        seta_4->setEnabled(true);
        seta_4->setFont(font3);
        seta_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_4);

        lbl_le_5 = new QLabel(layoutWidget);
        lbl_le_5->setObjectName("lbl_le_5");
        lbl_le_5->setFont(font2);
        lbl_le_5->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_5);

        seta_5 = new QLabel(layoutWidget);
        seta_5->setObjectName("seta_5");
        seta_5->setEnabled(true);
        seta_5->setFont(font3);
        seta_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_5);

        lbl_le_6 = new QLabel(layoutWidget);
        lbl_le_6->setObjectName("lbl_le_6");
        lbl_le_6->setFont(font2);
        lbl_le_6->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_6);

        seta_6 = new QLabel(layoutWidget);
        seta_6->setObjectName("seta_6");
        seta_6->setEnabled(true);
        seta_6->setFont(font3);
        seta_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_6);

        lbl_le_7 = new QLabel(layoutWidget);
        lbl_le_7->setObjectName("lbl_le_7");
        lbl_le_7->setFont(font2);
        lbl_le_7->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_7);

        seta_7 = new QLabel(layoutWidget);
        seta_7->setObjectName("seta_7");
        seta_7->setEnabled(true);
        seta_7->setFont(font3);
        seta_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_7);

        lbl_le_8 = new QLabel(layoutWidget);
        lbl_le_8->setObjectName("lbl_le_8");
        lbl_le_8->setFont(font2);
        lbl_le_8->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_8);

        seta_8 = new QLabel(layoutWidget);
        seta_8->setObjectName("seta_8");
        seta_8->setEnabled(true);
        seta_8->setFont(font3);
        seta_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_8);

        lbl_le_9 = new QLabel(layoutWidget);
        lbl_le_9->setObjectName("lbl_le_9");
        lbl_le_9->setFont(font2);
        lbl_le_9->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_9);

        seta_9 = new QLabel(layoutWidget);
        seta_9->setObjectName("seta_9");
        seta_9->setEnabled(true);
        seta_9->setFont(font3);
        seta_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        seta_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(seta_9);

        lbl_le_10 = new QLabel(layoutWidget);
        lbl_le_10->setObjectName("lbl_le_10");
        lbl_le_10->setFont(font2);
        lbl_le_10->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 238);"));
        lbl_le_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_le_10);

        lbl_quantidade_le = new QLabel(ListaEnc);
        lbl_quantidade_le->setObjectName("lbl_quantidade_le");
        lbl_quantidade_le->setGeometry(QRect(1130, 900, 171, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font4.setPointSize(14);
        lbl_quantidade_le->setFont(font4);
        lbl_quantidade_le->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        lbl_quantidade_le->setAlignment(Qt::AlignCenter);
        LINHAGUIA = new QFrame(ListaEnc);
        LINHAGUIA->setObjectName("LINHAGUIA");
        LINHAGUIA->setGeometry(QRect(520, 0, 1, 1080));
        LINHAGUIA->setFrameShape(QFrame::VLine);
        LINHAGUIA->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_2 = new QFrame(ListaEnc);
        LINHAGUIA_2->setObjectName("LINHAGUIA_2");
        LINHAGUIA_2->setGeometry(QRect(1220, 0, 1, 1080));
        LINHAGUIA_2->setFrameShape(QFrame::VLine);
        LINHAGUIA_2->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_3 = new QFrame(ListaEnc);
        LINHAGUIA_3->setObjectName("LINHAGUIA_3");
        LINHAGUIA_3->setGeometry(QRect(0, 360, 1920, 1));
        LINHAGUIA_3->setFrameShape(QFrame::HLine);
        LINHAGUIA_3->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_4 = new QFrame(ListaEnc);
        LINHAGUIA_4->setObjectName("LINHAGUIA_4");
        LINHAGUIA_4->setGeometry(QRect(0, 720, 1920, 1));
        LINHAGUIA_4->setFrameShape(QFrame::HLine);
        LINHAGUIA_4->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(ListaEnc);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(130, 290, 251, 221));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_adicionar = new QLabel(layoutWidget1);
        lbl_adicionar->setObjectName("lbl_adicionar");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font5.setPointSize(16);
        lbl_adicionar->setFont(font5);
        lbl_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        lbl_adicionar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_adicionar);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl_valor_adicionar = new QLabel(layoutWidget1);
        lbl_valor_adicionar->setObjectName("lbl_valor_adicionar");
        lbl_valor_adicionar->setFont(font4);
        lbl_valor_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));

        horizontalLayout_2->addWidget(lbl_valor_adicionar);

        txt_valor_adicionar = new QLineEdit(layoutWidget1);
        txt_valor_adicionar->setObjectName("txt_valor_adicionar");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txt_valor_adicionar->sizePolicy().hasHeightForWidth());
        txt_valor_adicionar->setSizePolicy(sizePolicy1);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font6.setPointSize(12);
        txt_valor_adicionar->setFont(font6);
        txt_valor_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));
        txt_valor_adicionar->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(txt_valor_adicionar);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbl_posicao_adicionar = new QLabel(layoutWidget1);
        lbl_posicao_adicionar->setObjectName("lbl_posicao_adicionar");
        lbl_posicao_adicionar->setFont(font4);
        lbl_posicao_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));

        horizontalLayout->addWidget(lbl_posicao_adicionar);

        txt_posicao_adicionar = new QLineEdit(layoutWidget1);
        txt_posicao_adicionar->setObjectName("txt_posicao_adicionar");
        sizePolicy1.setHeightForWidth(txt_posicao_adicionar->sizePolicy().hasHeightForWidth());
        txt_posicao_adicionar->setSizePolicy(sizePolicy1);
        txt_posicao_adicionar->setFont(font6);
        txt_posicao_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));
        txt_posicao_adicionar->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(txt_posicao_adicionar);


        verticalLayout->addLayout(horizontalLayout);

        btn_adicionar = new QPushButton(layoutWidget1);
        btn_adicionar->setObjectName("btn_adicionar");
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_adicionar->sizePolicy().hasHeightForWidth());
        btn_adicionar->setSizePolicy(sizePolicy2);
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font7.setPointSize(24);
        btn_adicionar->setFont(font7);
        btn_adicionar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        verticalLayout->addWidget(btn_adicionar);

        layoutWidget2 = new QWidget(ListaEnc);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(130, 540, 251, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_remover = new QLabel(layoutWidget2);
        lbl_remover->setObjectName("lbl_remover");
        lbl_remover->setFont(font5);
        lbl_remover->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));
        lbl_remover->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_remover);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbl_posicao_remover = new QLabel(layoutWidget2);
        lbl_posicao_remover->setObjectName("lbl_posicao_remover");
        lbl_posicao_remover->setFont(font4);
        lbl_posicao_remover->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)"));

        horizontalLayout_3->addWidget(lbl_posicao_remover);

        txt_posicao_remover = new QLineEdit(layoutWidget2);
        txt_posicao_remover->setObjectName("txt_posicao_remover");
        sizePolicy1.setHeightForWidth(txt_posicao_remover->sizePolicy().hasHeightForWidth());
        txt_posicao_remover->setSizePolicy(sizePolicy1);
        txt_posicao_remover->setFont(font6);
        txt_posicao_remover->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));
        txt_posicao_remover->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(txt_posicao_remover);


        verticalLayout_2->addLayout(horizontalLayout_3);

        btn_remover = new QPushButton(layoutWidget2);
        btn_remover->setObjectName("btn_remover");
        sizePolicy2.setHeightForWidth(btn_remover->sizePolicy().hasHeightForWidth());
        btn_remover->setSizePolicy(sizePolicy2);
        btn_remover->setFont(font7);
        btn_remover->setCursor(QCursor(Qt::PointingHandCursor));
        btn_remover->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        verticalLayout_2->addWidget(btn_remover);

        btn_reset = new QPushButton(ListaEnc);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setGeometry(QRect(210, 730, 90, 40));
        sizePolicy2.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy2);
        btn_reset->setFont(font5);
        btn_reset->setCursor(QCursor(Qt::PointingHandCursor));
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        retranslateUi(ListaEnc);
        QObject::connect(btn_voltarListaEnc, &QPushButton::clicked, ListaEnc, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ListaEnc);
    } // setupUi

    void retranslateUi(QDialog *ListaEnc)
    {
        ListaEnc->setWindowTitle(QCoreApplication::translate("ListaEnc", "Dialog", nullptr));
        lbl_titulo->setText(QCoreApplication::translate("ListaEnc", "Lista encadeada", nullptr));
        btn_voltarListaEnc->setText(QCoreApplication::translate("ListaEnc", "<", nullptr));
#if QT_CONFIG(shortcut)
        btn_voltarListaEnc->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        lbl_le_1->setText(QString());
        seta_1->setText(QString());
        lbl_le_2->setText(QString());
        seta_2->setText(QString());
        lbl_le_3->setText(QString());
        seta_3->setText(QString());
        lbl_le_4->setText(QString());
        seta_4->setText(QString());
        lbl_le_5->setText(QString());
        seta_5->setText(QString());
        lbl_le_6->setText(QString());
        seta_6->setText(QString());
        lbl_le_7->setText(QString());
        seta_7->setText(QString());
        lbl_le_8->setText(QString());
        seta_8->setText(QString());
        lbl_le_9->setText(QString());
        seta_9->setText(QString());
        lbl_le_10->setText(QString());
        lbl_quantidade_le->setText(QCoreApplication::translate("ListaEnc", "Quantidade: 0", nullptr));
        lbl_adicionar->setText(QCoreApplication::translate("ListaEnc", "Adicionar", nullptr));
        lbl_valor_adicionar->setText(QCoreApplication::translate("ListaEnc", "Valor", nullptr));
        txt_valor_adicionar->setText(QString());
        lbl_posicao_adicionar->setText(QCoreApplication::translate("ListaEnc", "Posi\303\247\303\243o", nullptr));
        txt_posicao_adicionar->setText(QString());
        btn_adicionar->setText(QCoreApplication::translate("ListaEnc", "+", nullptr));
        lbl_remover->setText(QCoreApplication::translate("ListaEnc", "Remover", nullptr));
        lbl_posicao_remover->setText(QCoreApplication::translate("ListaEnc", "Posi\303\247\303\243o", nullptr));
        txt_posicao_remover->setText(QString());
        btn_remover->setText(QCoreApplication::translate("ListaEnc", "-", nullptr));
        btn_reset->setText(QCoreApplication::translate("ListaEnc", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaEnc: public Ui_ListaEnc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAENC_H
