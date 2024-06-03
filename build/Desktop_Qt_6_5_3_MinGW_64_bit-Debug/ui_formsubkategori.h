/********************************************************************************
** Form generated from reading UI file 'formsubkategori.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSUBKATEGORI_H
#define UI_FORMSUBKATEGORI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formsubkategori
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idSubKategoriLabel;
    QLineEdit *idSubKategoriLineEdit;
    QLabel *namaSubKategoriLabel;
    QLineEdit *namaSubKategoriLineEdit;
    QLabel *idKategoriLabel;
    QLineEdit *idKategoriLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Formsubkategori)
    {
        if (Formsubkategori->objectName().isEmpty())
            Formsubkategori->setObjectName("Formsubkategori");
        Formsubkategori->resize(400, 197);
        formLayoutWidget = new QWidget(Formsubkategori);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 361, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idSubKategoriLabel = new QLabel(formLayoutWidget);
        idSubKategoriLabel->setObjectName("idSubKategoriLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idSubKategoriLabel);

        idSubKategoriLineEdit = new QLineEdit(formLayoutWidget);
        idSubKategoriLineEdit->setObjectName("idSubKategoriLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idSubKategoriLineEdit);

        namaSubKategoriLabel = new QLabel(formLayoutWidget);
        namaSubKategoriLabel->setObjectName("namaSubKategoriLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, namaSubKategoriLabel);

        namaSubKategoriLineEdit = new QLineEdit(formLayoutWidget);
        namaSubKategoriLineEdit->setObjectName("namaSubKategoriLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, namaSubKategoriLineEdit);

        idKategoriLabel = new QLabel(formLayoutWidget);
        idKategoriLabel->setObjectName("idKategoriLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, idKategoriLabel);

        idKategoriLineEdit = new QLineEdit(formLayoutWidget);
        idKategoriLineEdit->setObjectName("idKategoriLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, idKategoriLineEdit);

        pushButton = new QPushButton(Formsubkategori);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 150, 83, 29));
        pushButton_2 = new QPushButton(Formsubkategori);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 150, 83, 29));
        pushButton_3 = new QPushButton(Formsubkategori);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(260, 150, 83, 29));

        retranslateUi(Formsubkategori);

        QMetaObject::connectSlotsByName(Formsubkategori);
    } // setupUi

    void retranslateUi(QWidget *Formsubkategori)
    {
        Formsubkategori->setWindowTitle(QCoreApplication::translate("Formsubkategori", "Form", nullptr));
        idSubKategoriLabel->setText(QCoreApplication::translate("Formsubkategori", "Id Sub Kategori", nullptr));
        namaSubKategoriLabel->setText(QCoreApplication::translate("Formsubkategori", "Nama Sub Kategori", nullptr));
        idKategoriLabel->setText(QCoreApplication::translate("Formsubkategori", "Id kategori", nullptr));
        pushButton->setText(QCoreApplication::translate("Formsubkategori", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Formsubkategori", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Formsubkategori", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formsubkategori: public Ui_Formsubkategori {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSUBKATEGORI_H
