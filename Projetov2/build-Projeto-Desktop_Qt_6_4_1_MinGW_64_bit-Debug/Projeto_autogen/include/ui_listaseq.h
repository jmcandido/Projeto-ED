/********************************************************************************
** Form generated from reading UI file 'listaseq.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTASEQ_H
#define UI_LISTASEQ_H

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

class Ui_ListaSeq
{
public:
    QLabel *lbl_titulo_ls;
    QPushButton *btn_voltarListaSeq;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_ls_1;
    QLabel *lbl_ls_2;
    QLabel *lbl_ls_3;
    QLabel *lbl_ls_4;
    QLabel *lbl_ls_5;
    QLabel *lbl_ls_6;
    QLabel *lbl_ls_7;
    QLabel *lbl_ls_8;
    QLabel *lbl_ls_9;
    QLabel *lbl_ls_10;
    QFrame *LINHAGUIA_4;
    QFrame *LINHAGUIA_3;
    QFrame *LINHAGUIA;
    QFrame *LINHAGUIA_2;
    QFrame *LINHAGUIA_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_adicionar;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_valor_adicionar;
    QLineEdit *txt_valor_adicionar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_posicao_adicionar;
    QLineEdit *txt_posicao_adicionar;
    QPushButton *btn_adicionar;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_remover;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_posicao_remover;
    QLineEdit *txt_posicao_remover;
    QPushButton *btn_remover;
    QLabel *lbl_quantidade_ls;
    QPushButton *btn_reset;

    void setupUi(QDialog *ListaSeq)
    {
        if (ListaSeq->objectName().isEmpty())
            ListaSeq->setObjectName("ListaSeq");
        ListaSeq->resize(1920, 1080);
        ListaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 180, 159)"));
        lbl_titulo_ls = new QLabel(ListaSeq);
        lbl_titulo_ls->setObjectName("lbl_titulo_ls");
        lbl_titulo_ls->setGeometry(QRect(1080, 140, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(25);
        font.setBold(true);
        lbl_titulo_ls->setFont(font);
        lbl_titulo_ls->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_titulo_ls->setAlignment(Qt::AlignCenter);
        btn_voltarListaSeq = new QPushButton(ListaSeq);
        btn_voltarListaSeq->setObjectName("btn_voltarListaSeq");
        btn_voltarListaSeq->setGeometry(QRect(100, 50, 50, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(16);
        font1.setBold(true);
        btn_voltarListaSeq->setFont(font1);
        btn_voltarListaSeq->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarListaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(ListaSeq);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(630, 500, 1141, 81));
        layoutWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_ls_1 = new QLabel(layoutWidget);
        lbl_ls_1->setObjectName("lbl_ls_1");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font2.setPointSize(14);
        lbl_ls_1->setFont(font2);
        lbl_ls_1->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_1);

        lbl_ls_2 = new QLabel(layoutWidget);
        lbl_ls_2->setObjectName("lbl_ls_2");
        lbl_ls_2->setFont(font2);
        lbl_ls_2->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_2);

        lbl_ls_3 = new QLabel(layoutWidget);
        lbl_ls_3->setObjectName("lbl_ls_3");
        lbl_ls_3->setFont(font2);
        lbl_ls_3->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_3);

        lbl_ls_4 = new QLabel(layoutWidget);
        lbl_ls_4->setObjectName("lbl_ls_4");
        lbl_ls_4->setFont(font2);
        lbl_ls_4->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_4);

        lbl_ls_5 = new QLabel(layoutWidget);
        lbl_ls_5->setObjectName("lbl_ls_5");
        lbl_ls_5->setFont(font2);
        lbl_ls_5->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_5);

        lbl_ls_6 = new QLabel(layoutWidget);
        lbl_ls_6->setObjectName("lbl_ls_6");
        lbl_ls_6->setFont(font2);
        lbl_ls_6->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_6);

        lbl_ls_7 = new QLabel(layoutWidget);
        lbl_ls_7->setObjectName("lbl_ls_7");
        lbl_ls_7->setFont(font2);
        lbl_ls_7->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_7);

        lbl_ls_8 = new QLabel(layoutWidget);
        lbl_ls_8->setObjectName("lbl_ls_8");
        lbl_ls_8->setFont(font2);
        lbl_ls_8->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_8);

        lbl_ls_9 = new QLabel(layoutWidget);
        lbl_ls_9->setObjectName("lbl_ls_9");
        lbl_ls_9->setFont(font2);
        lbl_ls_9->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_9);

        lbl_ls_10 = new QLabel(layoutWidget);
        lbl_ls_10->setObjectName("lbl_ls_10");
        lbl_ls_10->setFont(font2);
        lbl_ls_10->setStyleSheet(QString::fromUtf8(""));
        lbl_ls_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lbl_ls_10);

        LINHAGUIA_4 = new QFrame(ListaSeq);
        LINHAGUIA_4->setObjectName("LINHAGUIA_4");
        LINHAGUIA_4->setGeometry(QRect(0, 720, 1920, 1));
        LINHAGUIA_4->setFrameShape(QFrame::HLine);
        LINHAGUIA_4->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_3 = new QFrame(ListaSeq);
        LINHAGUIA_3->setObjectName("LINHAGUIA_3");
        LINHAGUIA_3->setGeometry(QRect(0, 360, 1920, 1));
        LINHAGUIA_3->setFrameShape(QFrame::HLine);
        LINHAGUIA_3->setFrameShadow(QFrame::Sunken);
        LINHAGUIA = new QFrame(ListaSeq);
        LINHAGUIA->setObjectName("LINHAGUIA");
        LINHAGUIA->setGeometry(QRect(520, 0, 1, 1080));
        LINHAGUIA->setFrameShape(QFrame::VLine);
        LINHAGUIA->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_2 = new QFrame(ListaSeq);
        LINHAGUIA_2->setObjectName("LINHAGUIA_2");
        LINHAGUIA_2->setGeometry(QRect(1220, 0, 1, 1080));
        LINHAGUIA_2->setFrameShape(QFrame::VLine);
        LINHAGUIA_2->setFrameShadow(QFrame::Sunken);
        LINHAGUIA_5 = new QFrame(ListaSeq);
        LINHAGUIA_5->setObjectName("LINHAGUIA_5");
        LINHAGUIA_5->setGeometry(QRect(0, 540, 1920, 1));
        LINHAGUIA_5->setFrameShape(QFrame::HLine);
        LINHAGUIA_5->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(ListaSeq);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(130, 285, 251, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_adicionar = new QLabel(widget);
        lbl_adicionar->setObjectName("lbl_adicionar");
        lbl_adicionar->setEnabled(true);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font3.setPointSize(16);
        lbl_adicionar->setFont(font3);
        lbl_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_adicionar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_adicionar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbl_valor_adicionar = new QLabel(widget);
        lbl_valor_adicionar->setObjectName("lbl_valor_adicionar");
        lbl_valor_adicionar->setFont(font2);
        lbl_valor_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(lbl_valor_adicionar);

        txt_valor_adicionar = new QLineEdit(widget);
        txt_valor_adicionar->setObjectName("txt_valor_adicionar");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txt_valor_adicionar->sizePolicy().hasHeightForWidth());
        txt_valor_adicionar->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font4.setPointSize(12);
        txt_valor_adicionar->setFont(font4);
        txt_valor_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        horizontalLayout->addWidget(txt_valor_adicionar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl_posicao_adicionar = new QLabel(widget);
        lbl_posicao_adicionar->setObjectName("lbl_posicao_adicionar");
        lbl_posicao_adicionar->setFont(font2);
        lbl_posicao_adicionar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(lbl_posicao_adicionar);

        txt_posicao_adicionar = new QLineEdit(widget);
        txt_posicao_adicionar->setObjectName("txt_posicao_adicionar");
        sizePolicy.setHeightForWidth(txt_posicao_adicionar->sizePolicy().hasHeightForWidth());
        txt_posicao_adicionar->setSizePolicy(sizePolicy);
        txt_posicao_adicionar->setFont(font4);
        txt_posicao_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        horizontalLayout_2->addWidget(txt_posicao_adicionar);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_adicionar = new QPushButton(widget);
        btn_adicionar->setObjectName("btn_adicionar");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font5.setPointSize(24);
        font5.setBold(true);
        btn_adicionar->setFont(font5);
        btn_adicionar->setCursor(QCursor(Qt::PointingHandCursor));
        btn_adicionar->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(btn_adicionar);

        widget1 = new QWidget(ListaSeq);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(130, 540, 251, 161));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_remover = new QLabel(widget1);
        lbl_remover->setObjectName("lbl_remover");
        lbl_remover->setFont(font3);
        lbl_remover->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_remover->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_remover);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbl_posicao_remover = new QLabel(widget1);
        lbl_posicao_remover->setObjectName("lbl_posicao_remover");
        lbl_posicao_remover->setFont(font2);
        lbl_posicao_remover->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(lbl_posicao_remover);

        txt_posicao_remover = new QLineEdit(widget1);
        txt_posicao_remover->setObjectName("txt_posicao_remover");
        sizePolicy.setHeightForWidth(txt_posicao_remover->sizePolicy().hasHeightForWidth());
        txt_posicao_remover->setSizePolicy(sizePolicy);
        txt_posicao_remover->setFont(font4);
        txt_posicao_remover->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(34, 40, 49);"));

        horizontalLayout_3->addWidget(txt_posicao_remover);


        verticalLayout_2->addLayout(horizontalLayout_3);

        btn_remover = new QPushButton(widget1);
        btn_remover->setObjectName("btn_remover");
        btn_remover->setFont(font5);
        btn_remover->setCursor(QCursor(Qt::PointingHandCursor));
        btn_remover->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(btn_remover);

        lbl_quantidade_ls = new QLabel(ListaSeq);
        lbl_quantidade_ls->setObjectName("lbl_quantidade_ls");
        lbl_quantidade_ls->setGeometry(QRect(1135, 900, 171, 21));
        lbl_quantidade_ls->setFont(font2);
        lbl_quantidade_ls->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lbl_quantidade_ls->setAlignment(Qt::AlignCenter);
        btn_reset = new QPushButton(ListaSeq);
        btn_reset->setObjectName("btn_reset");
        btn_reset->setGeometry(QRect(210, 730, 90, 40));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font6.setPointSize(14);
        font6.setBold(true);
        btn_reset->setFont(font6);
        btn_reset->setCursor(QCursor(Qt::PointingHandCursor));
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 227, 201);\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(ListaSeq);
        QObject::connect(btn_voltarListaSeq, &QPushButton::clicked, ListaSeq, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ListaSeq);
    } // setupUi

    void retranslateUi(QDialog *ListaSeq)
    {
        ListaSeq->setWindowTitle(QCoreApplication::translate("ListaSeq", "Dialog", nullptr));
        lbl_titulo_ls->setText(QCoreApplication::translate("ListaSeq", "Lista sequencial", nullptr));
        btn_voltarListaSeq->setText(QCoreApplication::translate("ListaSeq", "<", nullptr));
        lbl_ls_1->setText(QString());
        lbl_ls_2->setText(QString());
        lbl_ls_3->setText(QString());
        lbl_ls_4->setText(QString());
        lbl_ls_5->setText(QString());
        lbl_ls_6->setText(QString());
        lbl_ls_7->setText(QString());
        lbl_ls_8->setText(QString());
        lbl_ls_9->setText(QString());
        lbl_ls_10->setText(QString());
        lbl_adicionar->setText(QCoreApplication::translate("ListaSeq", "Adicionar", nullptr));
        lbl_valor_adicionar->setText(QCoreApplication::translate("ListaSeq", "Valor", nullptr));
        lbl_posicao_adicionar->setText(QCoreApplication::translate("ListaSeq", "Posi\303\247\303\243o", nullptr));
        btn_adicionar->setText(QCoreApplication::translate("ListaSeq", "+", nullptr));
        lbl_remover->setText(QCoreApplication::translate("ListaSeq", "Remover", nullptr));
        lbl_posicao_remover->setText(QCoreApplication::translate("ListaSeq", "Posi\303\247\303\243o", nullptr));
        btn_remover->setText(QCoreApplication::translate("ListaSeq", "-", nullptr));
        lbl_quantidade_ls->setText(QCoreApplication::translate("ListaSeq", "Quantidade: 0", nullptr));
        btn_reset->setText(QCoreApplication::translate("ListaSeq", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaSeq: public Ui_ListaSeq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTASEQ_H
