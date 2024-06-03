/********************************************************************************
** Form generated from reading UI file 'formkota.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKOTA_H
#define UI_FORMKOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formkota
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idKotaLabel;
    QLineEdit *idKotaLineEdit;
    QLabel *namaKotaLabel;
    QLineEdit *namaKotaLineEdit;
    QLabel *ongkirLabel;
    QLineEdit *ongkirLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Formkota)
    {
        if (Formkota->objectName().isEmpty())
            Formkota->setObjectName("Formkota");
        Formkota->resize(400, 213);
        formLayoutWidget = new QWidget(Formkota);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 341, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idKotaLabel = new QLabel(formLayoutWidget);
        idKotaLabel->setObjectName("idKotaLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idKotaLabel);

        idKotaLineEdit = new QLineEdit(formLayoutWidget);
        idKotaLineEdit->setObjectName("idKotaLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idKotaLineEdit);

        namaKotaLabel = new QLabel(formLayoutWidget);
        namaKotaLabel->setObjectName("namaKotaLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaKotaLabel);

        namaKotaLineEdit = new QLineEdit(formLayoutWidget);
        namaKotaLineEdit->setObjectName("namaKotaLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaKotaLineEdit);

        ongkirLabel = new QLabel(formLayoutWidget);
        ongkirLabel->setObjectName("ongkirLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, ongkirLabel);

        ongkirLineEdit = new QLineEdit(formLayoutWidget);
        ongkirLineEdit->setObjectName("ongkirLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, ongkirLineEdit);

        pushButton = new QPushButton(Formkota);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 150, 83, 29));
        pushButton_2 = new QPushButton(Formkota);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 150, 83, 29));
        pushButton_3 = new QPushButton(Formkota);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(270, 150, 83, 29));

        retranslateUi(Formkota);

        QMetaObject::connectSlotsByName(Formkota);
    } // setupUi

    void retranslateUi(QWidget *Formkota)
    {
        Formkota->setWindowTitle(QCoreApplication::translate("Formkota", "Form", nullptr));
        idKotaLabel->setText(QCoreApplication::translate("Formkota", "Id kota", nullptr));
        namaKotaLabel->setText(QCoreApplication::translate("Formkota", "Nama kota", nullptr));
        ongkirLabel->setText(QCoreApplication::translate("Formkota", "Ongkir", nullptr));
        pushButton->setText(QCoreApplication::translate("Formkota", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formkota", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formkota", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formkota: public Ui_Formkota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKOTA_H
