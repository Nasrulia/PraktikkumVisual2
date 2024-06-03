/********************************************************************************
** Form generated from reading UI file 'formbarang.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMBARANG_H
#define UI_FORMBARANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormBarang
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idBarangLabel;
    QLineEdit *idBarangLineEdit;
    QLabel *namaBarangLabel;
    QLineEdit *namaBarangLineEdit;
    QLabel *satuanLabel;
    QLineEdit *satuanLineEdit;
    QLabel *hargaLabel;
    QLineEdit *hargaLineEdit;
    QLabel *keteranganLabel;
    QLineEdit *keteranganLineEdit;
    QLabel *beratLabel;
    QLineEdit *beratLineEdit;
    QLabel *dilihatLabel;
    QLineEdit *dilihatLineEdit;
    QLabel *dibeliLabel;
    QLineEdit *dibeliLineEdit;
    QLabel *kataKunciLabel;
    QLineEdit *kataKunciLineEdit;
    QLabel *stokLabel;
    QLineEdit *stokLineEdit;
    QLabel *idSubKategoriLabel;
    QLineEdit *idSubKategoriLineEdit;

    void setupUi(QWidget *FormBarang)
    {
        if (FormBarang->objectName().isEmpty())
            FormBarang->setObjectName("FormBarang");
        FormBarang->resize(403, 458);
        pushButton = new QPushButton(FormBarang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 400, 83, 29));
        pushButton_2 = new QPushButton(FormBarang);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 400, 83, 29));
        pushButton_3 = new QPushButton(FormBarang);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 400, 83, 29));
        formLayoutWidget = new QWidget(FormBarang);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 381));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idBarangLabel = new QLabel(formLayoutWidget);
        idBarangLabel->setObjectName("idBarangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idBarangLabel);

        idBarangLineEdit = new QLineEdit(formLayoutWidget);
        idBarangLineEdit->setObjectName("idBarangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idBarangLineEdit);

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

        keteranganLabel = new QLabel(formLayoutWidget);
        keteranganLabel->setObjectName("keteranganLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, keteranganLabel);

        keteranganLineEdit = new QLineEdit(formLayoutWidget);
        keteranganLineEdit->setObjectName("keteranganLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, keteranganLineEdit);

        beratLabel = new QLabel(formLayoutWidget);
        beratLabel->setObjectName("beratLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, beratLabel);

        beratLineEdit = new QLineEdit(formLayoutWidget);
        beratLineEdit->setObjectName("beratLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, beratLineEdit);

        dilihatLabel = new QLabel(formLayoutWidget);
        dilihatLabel->setObjectName("dilihatLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, dilihatLabel);

        dilihatLineEdit = new QLineEdit(formLayoutWidget);
        dilihatLineEdit->setObjectName("dilihatLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, dilihatLineEdit);

        dibeliLabel = new QLabel(formLayoutWidget);
        dibeliLabel->setObjectName("dibeliLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, dibeliLabel);

        dibeliLineEdit = new QLineEdit(formLayoutWidget);
        dibeliLineEdit->setObjectName("dibeliLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, dibeliLineEdit);

        kataKunciLabel = new QLabel(formLayoutWidget);
        kataKunciLabel->setObjectName("kataKunciLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, kataKunciLabel);

        kataKunciLineEdit = new QLineEdit(formLayoutWidget);
        kataKunciLineEdit->setObjectName("kataKunciLineEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, kataKunciLineEdit);

        stokLabel = new QLabel(formLayoutWidget);
        stokLabel->setObjectName("stokLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, stokLabel);

        stokLineEdit = new QLineEdit(formLayoutWidget);
        stokLineEdit->setObjectName("stokLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, stokLineEdit);

        idSubKategoriLabel = new QLabel(formLayoutWidget);
        idSubKategoriLabel->setObjectName("idSubKategoriLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, idSubKategoriLabel);

        idSubKategoriLineEdit = new QLineEdit(formLayoutWidget);
        idSubKategoriLineEdit->setObjectName("idSubKategoriLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, idSubKategoriLineEdit);


        retranslateUi(FormBarang);

        QMetaObject::connectSlotsByName(FormBarang);
    } // setupUi

    void retranslateUi(QWidget *FormBarang)
    {
        FormBarang->setWindowTitle(QCoreApplication::translate("FormBarang", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("FormBarang", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormBarang", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormBarang", "Hapus", nullptr));
        idBarangLabel->setText(QCoreApplication::translate("FormBarang", "Id barang", nullptr));
        namaBarangLabel->setText(QCoreApplication::translate("FormBarang", "Nama barang", nullptr));
        satuanLabel->setText(QCoreApplication::translate("FormBarang", "Satuan", nullptr));
        hargaLabel->setText(QCoreApplication::translate("FormBarang", "Harga", nullptr));
        keteranganLabel->setText(QCoreApplication::translate("FormBarang", "Keterangan", nullptr));
        beratLabel->setText(QCoreApplication::translate("FormBarang", "Berat", nullptr));
        dilihatLabel->setText(QCoreApplication::translate("FormBarang", "Dilihat", nullptr));
        dibeliLabel->setText(QCoreApplication::translate("FormBarang", "Dibeli", nullptr));
        kataKunciLabel->setText(QCoreApplication::translate("FormBarang", "Kata Kunci", nullptr));
        stokLabel->setText(QCoreApplication::translate("FormBarang", "Stok", nullptr));
        idSubKategoriLabel->setText(QCoreApplication::translate("FormBarang", "Id sub kategori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormBarang: public Ui_FormBarang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMBARANG_H
