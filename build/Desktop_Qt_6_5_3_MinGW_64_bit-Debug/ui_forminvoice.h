/********************************************************************************
** Form generated from reading UI file 'forminvoice.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVOICE_H
#define UI_FORMINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Forminvoice
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idInvoiceLabel;
    QLineEdit *idInvoiceLineEdit;
    QLabel *tanggalLabel;
    QDateEdit *tanggalDateEdit;
    QLabel *jumlahLabel;
    QLineEdit *jumlahLineEdit;
    QLabel *ongkirLabel;
    QLineEdit *ongkirLineEdit;
    QLabel *totalLabel;
    QLineEdit *totalLineEdit;
    QLabel *satusLabel;
    QLineEdit *satusLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *kotaLabel;
    QLineEdit *kotaLineEdit;
    QLabel *kodePosLabel;
    QLineEdit *kodePosLineEdit;
    QLabel *teleponLabel;
    QLineEdit *teleponLineEdit;
    QLabel *tarifLabel;
    QLineEdit *tarifLineEdit;
    QLabel *jumlahBeratLabel;
    QLineEdit *jumlahBeratLineEdit;
    QLabel *namaPenerimaLabel;
    QLineEdit *namaPenerimaLineEdit;
    QLabel *idplgLabel;
    QLineEdit *idplgLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Forminvoice)
    {
        if (Forminvoice->objectName().isEmpty())
            Forminvoice->setObjectName("Forminvoice");
        Forminvoice->resize(413, 565);
        formLayoutWidget = new QWidget(Forminvoice);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 391, 491));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idInvoiceLabel = new QLabel(formLayoutWidget);
        idInvoiceLabel->setObjectName("idInvoiceLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idInvoiceLabel);

        idInvoiceLineEdit = new QLineEdit(formLayoutWidget);
        idInvoiceLineEdit->setObjectName("idInvoiceLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idInvoiceLineEdit);

        tanggalLabel = new QLabel(formLayoutWidget);
        tanggalLabel->setObjectName("tanggalLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, tanggalLabel);

        tanggalDateEdit = new QDateEdit(formLayoutWidget);
        tanggalDateEdit->setObjectName("tanggalDateEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, tanggalDateEdit);

        jumlahLabel = new QLabel(formLayoutWidget);
        jumlahLabel->setObjectName("jumlahLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahLabel);

        jumlahLineEdit = new QLineEdit(formLayoutWidget);
        jumlahLineEdit->setObjectName("jumlahLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahLineEdit);

        ongkirLabel = new QLabel(formLayoutWidget);
        ongkirLabel->setObjectName("ongkirLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, ongkirLabel);

        ongkirLineEdit = new QLineEdit(formLayoutWidget);
        ongkirLineEdit->setObjectName("ongkirLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, ongkirLineEdit);

        totalLabel = new QLabel(formLayoutWidget);
        totalLabel->setObjectName("totalLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, totalLabel);

        totalLineEdit = new QLineEdit(formLayoutWidget);
        totalLineEdit->setObjectName("totalLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, totalLineEdit);

        satusLabel = new QLabel(formLayoutWidget);
        satusLabel->setObjectName("satusLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, satusLabel);

        satusLineEdit = new QLineEdit(formLayoutWidget);
        satusLineEdit->setObjectName("satusLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, satusLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, alamatLineEdit);

        kotaLabel = new QLabel(formLayoutWidget);
        kotaLabel->setObjectName("kotaLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, kotaLabel);

        kotaLineEdit = new QLineEdit(formLayoutWidget);
        kotaLineEdit->setObjectName("kotaLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, kotaLineEdit);

        kodePosLabel = new QLabel(formLayoutWidget);
        kodePosLabel->setObjectName("kodePosLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, kodePosLabel);

        kodePosLineEdit = new QLineEdit(formLayoutWidget);
        kodePosLineEdit->setObjectName("kodePosLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, kodePosLineEdit);

        teleponLabel = new QLabel(formLayoutWidget);
        teleponLabel->setObjectName("teleponLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, teleponLabel);

        teleponLineEdit = new QLineEdit(formLayoutWidget);
        teleponLineEdit->setObjectName("teleponLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, teleponLineEdit);

        tarifLabel = new QLabel(formLayoutWidget);
        tarifLabel->setObjectName("tarifLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, tarifLabel);

        tarifLineEdit = new QLineEdit(formLayoutWidget);
        tarifLineEdit->setObjectName("tarifLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, tarifLineEdit);

        jumlahBeratLabel = new QLabel(formLayoutWidget);
        jumlahBeratLabel->setObjectName("jumlahBeratLabel");

        formLayout->setWidget(11, QFormLayout::LabelRole, jumlahBeratLabel);

        jumlahBeratLineEdit = new QLineEdit(formLayoutWidget);
        jumlahBeratLineEdit->setObjectName("jumlahBeratLineEdit");

        formLayout->setWidget(11, QFormLayout::FieldRole, jumlahBeratLineEdit);

        namaPenerimaLabel = new QLabel(formLayoutWidget);
        namaPenerimaLabel->setObjectName("namaPenerimaLabel");

        formLayout->setWidget(12, QFormLayout::LabelRole, namaPenerimaLabel);

        namaPenerimaLineEdit = new QLineEdit(formLayoutWidget);
        namaPenerimaLineEdit->setObjectName("namaPenerimaLineEdit");

        formLayout->setWidget(12, QFormLayout::FieldRole, namaPenerimaLineEdit);

        idplgLabel = new QLabel(formLayoutWidget);
        idplgLabel->setObjectName("idplgLabel");

        formLayout->setWidget(13, QFormLayout::LabelRole, idplgLabel);

        idplgLineEdit = new QLineEdit(formLayoutWidget);
        idplgLineEdit->setObjectName("idplgLineEdit");

        formLayout->setWidget(13, QFormLayout::FieldRole, idplgLineEdit);

        pushButton = new QPushButton(Forminvoice);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 510, 83, 29));
        pushButton_2 = new QPushButton(Forminvoice);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 510, 83, 29));
        pushButton_3 = new QPushButton(Forminvoice);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 510, 83, 29));

        retranslateUi(Forminvoice);

        QMetaObject::connectSlotsByName(Forminvoice);
    } // setupUi

    void retranslateUi(QWidget *Forminvoice)
    {
        Forminvoice->setWindowTitle(QCoreApplication::translate("Forminvoice", "Form", nullptr));
        idInvoiceLabel->setText(QCoreApplication::translate("Forminvoice", "Id invoice", nullptr));
        tanggalLabel->setText(QCoreApplication::translate("Forminvoice", "Tanggal", nullptr));
        jumlahLabel->setText(QCoreApplication::translate("Forminvoice", "Jumlah", nullptr));
        ongkirLabel->setText(QCoreApplication::translate("Forminvoice", "Ongkir", nullptr));
        totalLabel->setText(QCoreApplication::translate("Forminvoice", "Total", nullptr));
        satusLabel->setText(QCoreApplication::translate("Forminvoice", "Satus", nullptr));
        alamatLabel->setText(QCoreApplication::translate("Forminvoice", "Alamat", nullptr));
        kotaLabel->setText(QCoreApplication::translate("Forminvoice", "Kota", nullptr));
        kodePosLabel->setText(QCoreApplication::translate("Forminvoice", "Kode Pos", nullptr));
        teleponLabel->setText(QCoreApplication::translate("Forminvoice", "Telepon", nullptr));
        tarifLabel->setText(QCoreApplication::translate("Forminvoice", "Tarif", nullptr));
        jumlahBeratLabel->setText(QCoreApplication::translate("Forminvoice", "Jumlah berat", nullptr));
        namaPenerimaLabel->setText(QCoreApplication::translate("Forminvoice", "Nama penerima", nullptr));
        idplgLabel->setText(QCoreApplication::translate("Forminvoice", "idplg", nullptr));
        pushButton->setText(QCoreApplication::translate("Forminvoice", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Forminvoice", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Forminvoice", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Forminvoice: public Ui_Forminvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVOICE_H
