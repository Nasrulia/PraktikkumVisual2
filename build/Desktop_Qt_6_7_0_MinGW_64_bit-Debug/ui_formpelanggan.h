/********************************************************************************
** Form generated from reading UI file 'formpelanggan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPELANGGAN_H
#define UI_FORMPELANGGAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formpelanggan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *pelangganLabel;
    QLineEdit *idpelangganLineEdit;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *namaPelangganLabel;
    QLineEdit *namaPelangganLineEdit;
    QLabel *alamatPelangganLabel;
    QLineEdit *alamatPelangganLineEdit;
    QLabel *kodePosLabel;
    QLineEdit *kodePosLineEdit;
    QLabel *telponLabel;
    QLineEdit *telponLineEdit;
    QLabel *tanggalDaftarLabel;
    QDateEdit *tanggalDaftarDateEdit;
    QLabel *tanggalLoginLabel;
    QDateEdit *tanggalLoginDateEdit;
    QLabel *tanyaLabel;
    QLineEdit *tanyaLineEdit;
    QLabel *jawabLabel;
    QLineEdit *jawabLineEdit;
    QLabel *idKotaLabel;
    QLineEdit *idKotaLineEdit;
    QLabel *kotaPelangganLabel;
    QLineEdit *kotaPelangganLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Formpelanggan)
    {
        if (Formpelanggan->objectName().isEmpty())
            Formpelanggan->setObjectName("Formpelanggan");
        Formpelanggan->resize(403, 567);
        formLayoutWidget = new QWidget(Formpelanggan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 471));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        pelangganLabel = new QLabel(formLayoutWidget);
        pelangganLabel->setObjectName("pelangganLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, pelangganLabel);

        idpelangganLineEdit = new QLineEdit(formLayoutWidget);
        idpelangganLineEdit->setObjectName("idpelangganLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idpelangganLineEdit);

        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordLineEdit);

        namaPelangganLabel = new QLabel(formLayoutWidget);
        namaPelangganLabel->setObjectName("namaPelangganLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, namaPelangganLabel);

        namaPelangganLineEdit = new QLineEdit(formLayoutWidget);
        namaPelangganLineEdit->setObjectName("namaPelangganLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, namaPelangganLineEdit);

        alamatPelangganLabel = new QLabel(formLayoutWidget);
        alamatPelangganLabel->setObjectName("alamatPelangganLabel");

        formLayout->setWidget(4, QFormLayout::LabelRole, alamatPelangganLabel);

        alamatPelangganLineEdit = new QLineEdit(formLayoutWidget);
        alamatPelangganLineEdit->setObjectName("alamatPelangganLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, alamatPelangganLineEdit);

        kodePosLabel = new QLabel(formLayoutWidget);
        kodePosLabel->setObjectName("kodePosLabel");

        formLayout->setWidget(5, QFormLayout::LabelRole, kodePosLabel);

        kodePosLineEdit = new QLineEdit(formLayoutWidget);
        kodePosLineEdit->setObjectName("kodePosLineEdit");

        formLayout->setWidget(5, QFormLayout::FieldRole, kodePosLineEdit);

        telponLabel = new QLabel(formLayoutWidget);
        telponLabel->setObjectName("telponLabel");

        formLayout->setWidget(6, QFormLayout::LabelRole, telponLabel);

        telponLineEdit = new QLineEdit(formLayoutWidget);
        telponLineEdit->setObjectName("telponLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, telponLineEdit);

        tanggalDaftarLabel = new QLabel(formLayoutWidget);
        tanggalDaftarLabel->setObjectName("tanggalDaftarLabel");

        formLayout->setWidget(7, QFormLayout::LabelRole, tanggalDaftarLabel);

        tanggalDaftarDateEdit = new QDateEdit(formLayoutWidget);
        tanggalDaftarDateEdit->setObjectName("tanggalDaftarDateEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, tanggalDaftarDateEdit);

        tanggalLoginLabel = new QLabel(formLayoutWidget);
        tanggalLoginLabel->setObjectName("tanggalLoginLabel");

        formLayout->setWidget(8, QFormLayout::LabelRole, tanggalLoginLabel);

        tanggalLoginDateEdit = new QDateEdit(formLayoutWidget);
        tanggalLoginDateEdit->setObjectName("tanggalLoginDateEdit");

        formLayout->setWidget(8, QFormLayout::FieldRole, tanggalLoginDateEdit);

        tanyaLabel = new QLabel(formLayoutWidget);
        tanyaLabel->setObjectName("tanyaLabel");

        formLayout->setWidget(9, QFormLayout::LabelRole, tanyaLabel);

        tanyaLineEdit = new QLineEdit(formLayoutWidget);
        tanyaLineEdit->setObjectName("tanyaLineEdit");

        formLayout->setWidget(9, QFormLayout::FieldRole, tanyaLineEdit);

        jawabLabel = new QLabel(formLayoutWidget);
        jawabLabel->setObjectName("jawabLabel");

        formLayout->setWidget(10, QFormLayout::LabelRole, jawabLabel);

        jawabLineEdit = new QLineEdit(formLayoutWidget);
        jawabLineEdit->setObjectName("jawabLineEdit");

        formLayout->setWidget(10, QFormLayout::FieldRole, jawabLineEdit);

        idKotaLabel = new QLabel(formLayoutWidget);
        idKotaLabel->setObjectName("idKotaLabel");

        formLayout->setWidget(11, QFormLayout::LabelRole, idKotaLabel);

        idKotaLineEdit = new QLineEdit(formLayoutWidget);
        idKotaLineEdit->setObjectName("idKotaLineEdit");

        formLayout->setWidget(11, QFormLayout::FieldRole, idKotaLineEdit);

        kotaPelangganLabel = new QLabel(formLayoutWidget);
        kotaPelangganLabel->setObjectName("kotaPelangganLabel");

        formLayout->setWidget(12, QFormLayout::LabelRole, kotaPelangganLabel);

        kotaPelangganLineEdit = new QLineEdit(formLayoutWidget);
        kotaPelangganLineEdit->setObjectName("kotaPelangganLineEdit");

        formLayout->setWidget(12, QFormLayout::FieldRole, kotaPelangganLineEdit);

        pushButton = new QPushButton(Formpelanggan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 490, 83, 29));
        pushButton_2 = new QPushButton(Formpelanggan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 490, 83, 29));
        pushButton_3 = new QPushButton(Formpelanggan);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(220, 490, 83, 29));

        retranslateUi(Formpelanggan);

        QMetaObject::connectSlotsByName(Formpelanggan);
    } // setupUi

    void retranslateUi(QWidget *Formpelanggan)
    {
        Formpelanggan->setWindowTitle(QCoreApplication::translate("Formpelanggan", "Form", nullptr));
        pelangganLabel->setText(QCoreApplication::translate("Formpelanggan", "Id pelanggan", nullptr));
        emailLabel->setText(QCoreApplication::translate("Formpelanggan", "Email", nullptr));
        passwordLabel->setText(QCoreApplication::translate("Formpelanggan", "Password", nullptr));
        namaPelangganLabel->setText(QCoreApplication::translate("Formpelanggan", "Nama Pelanggan", nullptr));
        alamatPelangganLabel->setText(QCoreApplication::translate("Formpelanggan", "Alamat Pelanggan", nullptr));
        kodePosLabel->setText(QCoreApplication::translate("Formpelanggan", "Kode Pos", nullptr));
        telponLabel->setText(QCoreApplication::translate("Formpelanggan", "Telpon", nullptr));
        tanggalDaftarLabel->setText(QCoreApplication::translate("Formpelanggan", "Tanggal Daftar", nullptr));
        tanggalLoginLabel->setText(QCoreApplication::translate("Formpelanggan", "Tanggal Login", nullptr));
        tanyaLabel->setText(QCoreApplication::translate("Formpelanggan", "Tanya", nullptr));
        jawabLabel->setText(QCoreApplication::translate("Formpelanggan", "Jawab", nullptr));
        idKotaLabel->setText(QCoreApplication::translate("Formpelanggan", "Id Kota", nullptr));
        kotaPelangganLabel->setText(QCoreApplication::translate("Formpelanggan", "Kota pelanggan", nullptr));
        pushButton->setText(QCoreApplication::translate("Formpelanggan", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formpelanggan", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formpelanggan", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formpelanggan: public Ui_Formpelanggan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPELANGGAN_H
