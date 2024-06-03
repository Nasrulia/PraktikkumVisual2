#include "guipraktikum.h"
#include "ui_guipraktikum.h"
#include "QString"

guiPraktikum::guiPraktikum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::guiPraktikum)
{
    ui->setupUi(this);
    myForm = new FormKaryawan;
    mybarang = new FormBarang;
    myinvd = new FormInvd;
    mykota = new Formkota;
    mypelanggan = new Formpelanggan;
    myinvoice = new Forminvoice;
    mysubKategori = new FormsubKategory;
    mykategori =  new Formkategori;
}

guiPraktikum::~guiPraktikum()
{
    delete ui;
}

void guiPraktikum::on_pushButton_clicked()
{
    myForm->show();
}


void guiPraktikum::on_pushButton_2_clicked()
{
    mybarang->show();
}


void guiPraktikum::on_pushButton_3_clicked()
{
    myinvd->show();
}


void guiPraktikum::on_pushButton_4_clicked()
{
    mykota->show();
}


void guiPraktikum::on_pushButton_5_clicked()
{
    mypelanggan->show();
}


void guiPraktikum::on_pushButton_6_clicked()
{
    myinvoice->show();
}


void guiPraktikum::on_pushButton_7_clicked()
{
    mysubKategori->show();
}


void guiPraktikum::on_pushButton_9_clicked()
{
    mykategori->show();
}

