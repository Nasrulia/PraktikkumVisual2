/********************************************************************************
** Form generated from reading UI file 'guipraktikum.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPRAKTIKUM_H
#define UI_GUIPRAKTIKUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiPraktikum
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *guiPraktikum)
    {
        if (guiPraktikum->objectName().isEmpty())
            guiPraktikum->setObjectName("guiPraktikum");
        guiPraktikum->resize(486, 441);
        centralwidget = new QWidget(guiPraktikum);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 250, 151, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 20, 83, 29));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 20, 83, 29));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(220, 20, 83, 29));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(320, 20, 83, 29));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 70, 83, 29));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(140, 70, 101, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(260, 70, 101, 31));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(370, 70, 83, 29));
        guiPraktikum->setCentralWidget(centralwidget);
        menubar = new QMenuBar(guiPraktikum);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 486, 25));
        guiPraktikum->setMenuBar(menubar);
        statusbar = new QStatusBar(guiPraktikum);
        statusbar->setObjectName("statusbar");
        guiPraktikum->setStatusBar(statusbar);

        retranslateUi(guiPraktikum);

        QMetaObject::connectSlotsByName(guiPraktikum);
    } // setupUi

    void retranslateUi(QMainWindow *guiPraktikum)
    {
        guiPraktikum->setWindowTitle(QCoreApplication::translate("guiPraktikum", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("guiPraktikum", "Form Karyawan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("guiPraktikum", "Barang", nullptr));
        pushButton_3->setText(QCoreApplication::translate("guiPraktikum", "Invd", nullptr));
        pushButton_4->setText(QCoreApplication::translate("guiPraktikum", "Kota", nullptr));
        pushButton_5->setText(QCoreApplication::translate("guiPraktikum", "Pelanggan", nullptr));
        pushButton_6->setText(QCoreApplication::translate("guiPraktikum", "Invoice", nullptr));
        pushButton_7->setText(QCoreApplication::translate("guiPraktikum", "Sub kategori", nullptr));
        pushButton_8->setText(QCoreApplication::translate("guiPraktikum", "Kategori", nullptr));
        pushButton_9->setText(QCoreApplication::translate("guiPraktikum", "Kategori", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guiPraktikum: public Ui_guiPraktikum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPRAKTIKUM_H
