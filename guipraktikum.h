#ifndef GUIPRAKTIKUM_H
#define GUIPRAKTIKUM_H

#include <QMainWindow>
#include <formkaryawan.h>
#include <formbarang.h>
#include <forminvd.h>
#include <formkota.h>
#include <formpelanggan.h>
#include <forminvoice.h>
#include <formsubkategory.h>
#include <formkategori.h>

namespace Ui {
class guiPraktikum;
}

class guiPraktikum : public QMainWindow
{
    Q_OBJECT

public:
    explicit guiPraktikum(QWidget *parent = nullptr);
    ~guiPraktikum();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::guiPraktikum *ui;
    FormKaryawan *myForm;
    FormBarang *mybarang;
    FormInvd *myinvd;
    Formkota *mykota;
    Formpelanggan *mypelanggan;
    Forminvoice *myinvoice;
    FormsubKategory *mysubKategori;
    Formkategori *mykategori;
};

#endif // GUIPRAKTIKUM_H
