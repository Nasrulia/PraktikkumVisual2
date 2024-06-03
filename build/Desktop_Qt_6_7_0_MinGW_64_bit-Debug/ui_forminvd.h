/********************************************************************************
** Form generated from reading UI file 'forminvd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVD_H
#define UI_FORMINVD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormInvd
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idDetailLabel;
    QLineEdit *idDetailLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *satuanLabel;
    QLineEdit *satuanLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *qtyLabel;
    QLineEdit *qtyLineEdit;
    QLabel *jumlahLabel;
    QLineEdit *jumlahLineEdit;
    QLabel *barangLabel;
    QLineEdit *barangLineEdit;
    QLabel *jumlahBeratLabel;
    QLineEdit *jumlahBeratLineEdit;
    QLabel *idInvoiceLabel;
    QLineEdit *idInvoiceLineEdit;
    QLabel *idBarangLabel;
    QLineEdit *idBarangLineEdit;
    QLabel *beratLabel;
    QLineEdit *beratLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormInvd)
    {
        if (FormInvd->objectName().isEmpty())
            FormInvd->setObjectName("FormInvd");
        FormInvd->resize(400, 481);
        formLayoutWidget = new QWidget(FormInvd);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 407));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idDetailLabel = new QLabel(formLayoutWidget);
        idDetailLabel->setObjectName("idDetailLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idDetailLabel);

        idDetailLineEdit = new QLineEdit(formLayoutWidget);
        idDetailLineEdit->setObjectName("idDetailLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idDetailLineEdit);

        namaBarangLabel = new QLabel(formLayoutWidget);
        namaBarangLabel->setObjectName("namaBarangLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaBarangLabel);

        namaBarangLineEdit = new QLineEdit(formLayoutWidget);
        namaBarangLineEdit->setObjectName("namaBarangLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaBarangLineEdit);

        satuanLabel = new QLabel(formLayoutWidget);
        satuanLabel->setObjectName("satuanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, satuanLabel);

        satuanLineEdit = new QLineEdit(formLayoutWidget);
        satuanLineEdit->setObjectName("satuanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, satuanLineEdit);

        hargaLabel = new QLabel(formLayoutWidget);
        hargaLabel->setObjectName("hargaLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, hargaLabel);

        hargaLineEdit = new QLineEdit(formLayoutWidget);
        hargaLineEdit->setObjectName("hargaLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, hargaLineEdit);

        qtyLabel = new QLabel(formLayoutWidget);
        qtyLabel->setObjectName("qtyLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, qtyLabel);

        qtyLineEdit = new QLineEdit(formLayoutWidget);
        qtyLineEdit->setObjectName("qtyLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, qtyLineEdit);

        jumlahLabel = new QLabel(formLayoutWidget);
        jumlahLabel->setObjectName("jumlahLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, jumlahLabel);

        jumlahLineEdit = new QLineEdit(formLayoutWidget);
        jumlahLineEdit->setObjectName("jumlahLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, jumlahLineEdit);

        barangLabel = new QLabel(formLayoutWidget);
        barangLabel->setObjectName("barangLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, barangLabel);

        barangLineEdit = new QLineEdit(formLayoutWidget);
        barangLineEdit->setObjectName("barangLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, barangLineEdit);

        jumlahBeratLabel = new QLabel(formLayoutWidget);
        jumlahBeratLabel->setObjectName("jumlahBeratLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, jumlahBeratLabel);

        jumlahBeratLineEdit = new QLineEdit(formLayoutWidget);
        jumlahBeratLineEdit->setObjectName("jumlahBeratLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, jumlahBeratLineEdit);

        idInvoiceLabel = new QLabel(formLayoutWidget);
        idInvoiceLabel->setObjectName("idInvoiceLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, idInvoiceLabel);

        idInvoiceLineEdit = new QLineEdit(formLayoutWidget);
        idInvoiceLineEdit->setObjectName("idInvoiceLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, idInvoiceLineEdit);

        idBarangLabel = new QLabel(formLayoutWidget);
        idBarangLabel->setObjectName("idBarangLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, idBarangLabel);

        idBarangLineEdit = new QLineEdit(formLayoutWidget);
        idBarangLineEdit->setObjectName("idBarangLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, idBarangLineEdit);

        beratLabel = new QLabel(formLayoutWidget);
        beratLabel->setObjectName("beratLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, beratLabel);

        beratLineEdit = new QLineEdit(formLayoutWidget);
        beratLineEdit->setObjectName("beratLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, beratLineEdit);

        pushButton = new QPushButton(FormInvd);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 400, 83, 29));
        pushButton_2 = new QPushButton(FormInvd);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 400, 83, 29));
        pushButton_3 = new QPushButton(FormInvd);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 400, 83, 29));

        retranslateUi(FormInvd);

        QMetaObject::connectSlotsByName(FormInvd);
    } // setupUi

    void retranslateUi(QWidget *FormInvd)
    {
        FormInvd->setWindowTitle(QCoreApplication::translate("FormInvd", "Form", nullptr));
        idDetailLabel->setText(QCoreApplication::translate("FormInvd", "Id detail", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormInvd", "Nama barang", nullptr));
        satuanLabel->setText(QCoreApplication::translate("FormInvd", "Satuan", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormInvd", "Harga", nullptr));
        qtyLabel->setText(QCoreApplication::translate("FormInvd", "Qty", nullptr));
        jumlahLabel->setText(QCoreApplication::translate("FormInvd", "Jumlah", nullptr));
        barangLabel->setText(QCoreApplication::translate("FormInvd", "Barang", nullptr));
        jumlahBeratLabel->setText(QCoreApplication::translate("FormInvd", "Jumlah berat", nullptr));
        idInvoiceLabel->setText(QCoreApplication::translate("FormInvd", "Id invoice", nullptr));
        idBarangLabel->setText(QCoreApplication::translate("FormInvd", "Id barang", nullptr));
        beratLabel->setText(QCoreApplication::translate("FormInvd", "Berat", nullptr));
        pushButton->setText(QCoreApplication::translate("FormInvd", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormInvd", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormInvd", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormInvd: public Ui_FormInvd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVD_H
