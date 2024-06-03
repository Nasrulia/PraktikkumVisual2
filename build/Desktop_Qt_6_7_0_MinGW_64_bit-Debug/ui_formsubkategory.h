/********************************************************************************
** Form generated from reading UI file 'formsubkategory.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSUBKATEGORY_H
#define UI_FORMSUBKATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormsubKategory
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idSubKetegoriLabel;
    QLineEdit *idSubKetegoriLineEdit;
    QLabel *namaSubKategoriLabel;
    QLineEdit *namaSubKategoriLineEdit;
    QLabel *idKategoriLabel;
    QLineEdit *idKategoriLineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *FormsubKategory)
    {
        if (FormsubKategory->objectName().isEmpty())
            FormsubKategory->setObjectName("FormsubKategory");
        FormsubKategory->resize(400, 300);
        formLayoutWidget = new QWidget(FormsubKategory);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 10, 371, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        idSubKetegoriLabel = new QLabel(formLayoutWidget);
        idSubKetegoriLabel->setObjectName("idSubKetegoriLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, idSubKetegoriLabel);

        idSubKetegoriLineEdit = new QLineEdit(formLayoutWidget);
        idSubKetegoriLineEdit->setObjectName("idSubKetegoriLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, idSubKetegoriLineEdit);

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

        pushButton = new QPushButton(FormsubKategory);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 150, 83, 29));
        pushButton_2 = new QPushButton(FormsubKategory);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 150, 83, 29));
        pushButton_3 = new QPushButton(FormsubKategory);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 150, 83, 29));

        retranslateUi(FormsubKategory);

        QMetaObject::connectSlotsByName(FormsubKategory);
    } // setupUi

    void retranslateUi(QWidget *FormsubKategory)
    {
        FormsubKategory->setWindowTitle(QCoreApplication::translate("FormsubKategory", "Form", nullptr));
        idSubKetegoriLabel->setText(QCoreApplication::translate("FormsubKategory", "Id Sub Ketegori", nullptr));
        namaSubKategoriLabel->setText(QCoreApplication::translate("FormsubKategory", "Nama Sub Kategori", nullptr));
        idKategoriLabel->setText(QCoreApplication::translate("FormsubKategory", "Id Kategori", nullptr));
        pushButton->setText(QCoreApplication::translate("FormsubKategory", "Simpan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FormsubKategory", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("FormsubKategory", "Hapus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormsubKategory: public Ui_FormsubKategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSUBKATEGORY_H
