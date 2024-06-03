/********************************************************************************
** Form generated from reading UI file 'formkategori.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMKATEGORI_H
#define UI_FORMKATEGORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formkategori
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idKategoriLabel;
    QLineEdit *idKategoriLineEdit;
    QLabel *namaKategoriLabel;
    QLineEdit *namaKategoriLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Formkategori)
    {
        if (Formkategori->objectName().isEmpty())
            Formkategori->setObjectName("Formkategori");
        Formkategori->resize(400, 300);
        formLayoutWidget = new QWidget(Formkategori);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 361, 111));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idKategoriLabel = new QLabel(formLayoutWidget);
        idKategoriLabel->setObjectName("idKategoriLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idKategoriLabel);

        idKategoriLineEdit = new QLineEdit(formLayoutWidget);
        idKategoriLineEdit->setObjectName("idKategoriLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idKategoriLineEdit);

        namaKategoriLabel = new QLabel(formLayoutWidget);
        namaKategoriLabel->setObjectName("namaKategoriLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaKategoriLabel);

        namaKategoriLineEdit = new QLineEdit(formLayoutWidget);
        namaKategoriLineEdit->setObjectName("namaKategoriLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaKategoriLineEdit);

        pushButton = new QPushButton(Formkategori);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 150, 83, 29));
        pushButton_2 = new QPushButton(Formkategori);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 150, 83, 29));
        pushButton_3 = new QPushButton(Formkategori);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 150, 83, 29));

        retranslateUi(Formkategori);

        QMetaObject::connectSlotsByName(Formkategori);
    } // setupUi

    void retranslateUi(QWidget *Formkategori)
    {
        Formkategori->setWindowTitle(QCoreApplication::translate("Formkategori", "Form", nullptr));
        idKategoriLabel->setText(QCoreApplication::translate("Formkategori", "Id Kategori", nullptr));
        namaKategoriLabel->setText(QCoreApplication::translate("Formkategori", "Nama Kategori", nullptr));
        pushButton->setText(QCoreApplication::translate("Formkategori", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formkategori", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formkategori", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formkategori: public Ui_Formkategori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMKATEGORI_H
