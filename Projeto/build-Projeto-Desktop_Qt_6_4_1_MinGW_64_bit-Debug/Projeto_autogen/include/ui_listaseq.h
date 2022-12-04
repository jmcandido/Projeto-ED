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
    QLabel *label;
    QPushButton *btn_voltarListaSeq;
    QLabel *lbl_print;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_adicionar;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_valor;
    QLineEdit *txt_valorAdicionar;
    QPushButton *btn_adicionarListaSeq;

    void setupUi(QDialog *ListaSeq)
    {
        if (ListaSeq->objectName().isEmpty())
            ListaSeq->setObjectName("ListaSeq");
        ListaSeq->resize(1920, 1080);
        ListaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 158, 179);"));
        label = new QLabel(ListaSeq);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 91, 16));
        btn_voltarListaSeq = new QPushButton(ListaSeq);
        btn_voltarListaSeq->setObjectName("btn_voltarListaSeq");
        btn_voltarListaSeq->setGeometry(QRect(100, 50, 50, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font.setPointSize(16);
        font.setBold(true);
        btn_voltarListaSeq->setFont(font);
        btn_voltarListaSeq->setCursor(QCursor(Qt::PointingHandCursor));
        btn_voltarListaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));
        lbl_print = new QLabel(ListaSeq);
        lbl_print->setObjectName("lbl_print");
        lbl_print->setGeometry(QRect(360, 180, 191, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font1.setPointSize(14);
        lbl_print->setFont(font1);
        layoutWidget = new QWidget(ListaSeq);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 160, 144, 100));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_adicionar = new QLabel(layoutWidget);
        lbl_adicionar->setObjectName("lbl_adicionar");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat SemiBold")});
        font2.setPointSize(13);
        lbl_adicionar->setFont(font2);
        lbl_adicionar->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_adicionar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbl_valor = new QLabel(layoutWidget);
        lbl_valor->setObjectName("lbl_valor");
        lbl_valor->setFont(font2);

        horizontalLayout->addWidget(lbl_valor);

        txt_valorAdicionar = new QLineEdit(layoutWidget);
        txt_valorAdicionar->setObjectName("txt_valorAdicionar");

        horizontalLayout->addWidget(txt_valorAdicionar);


        verticalLayout->addLayout(horizontalLayout);

        btn_adicionarListaSeq = new QPushButton(layoutWidget);
        btn_adicionarListaSeq->setObjectName("btn_adicionarListaSeq");
        btn_adicionarListaSeq->setFont(font);
        btn_adicionarListaSeq->setCursor(QCursor(Qt::PointingHandCursor));
        btn_adicionarListaSeq->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 204, 156);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(btn_adicionarListaSeq);


        retranslateUi(ListaSeq);
        QObject::connect(btn_voltarListaSeq, &QPushButton::clicked, ListaSeq, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ListaSeq);
    } // setupUi

    void retranslateUi(QDialog *ListaSeq)
    {
        ListaSeq->setWindowTitle(QCoreApplication::translate("ListaSeq", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ListaSeq", "Lista sequencial", nullptr));
        btn_voltarListaSeq->setText(QCoreApplication::translate("ListaSeq", "<", nullptr));
        lbl_print->setText(QString());
        lbl_adicionar->setText(QCoreApplication::translate("ListaSeq", "Adicionar", nullptr));
        lbl_valor->setText(QCoreApplication::translate("ListaSeq", "Valor", nullptr));
        btn_adicionarListaSeq->setText(QCoreApplication::translate("ListaSeq", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaSeq: public Ui_ListaSeq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTASEQ_H
