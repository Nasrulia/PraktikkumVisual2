#include "forminvoice.h"
#include "ui_forminvoice.h"

Forminvoice::Forminvoice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Forminvoice)
{
    ui->setupUi(this);
}

Forminvoice::~Forminvoice()
{
    delete ui;
}

void Forminvoice::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_invoice(idinvoice,tanggal,jumlah,ongkir,total,statinv,alamat,kota,kodepos,telepon,tarif,jmlberat,namapenerima,idplg)"
                "VALUE(:idinvoice,:tanggal,:jumlah,:ongkir,:total,:statinv,:alamat,:kota,:kodepos,:telepon,:tarif,:jmlberat,:namapenerima,:idplg)");
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":tanggal",ui->tanggalDateEdit->date());
    sql.bindValue(":jumlah",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    sql.bindValue(":total",ui->totalLineEdit->text().toInt());
    sql.bindValue(":statinv",ui->satusLineEdit->text().toInt());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":kota",ui->kotaLineEdit->text());
    sql.bindValue(":kodepos",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telepon",ui->teleponLineEdit->text().toInt());
    sql.bindValue(":tarif",ui->tarifLineEdit->text().toInt());
    sql.bindValue(":jmlberat",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":namapenerima",ui->namaPenerimaLineEdit->text());
    sql.bindValue(":idplg",ui->idplgLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Forminvoice::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);
    sql.prepare("UPDATE tbl_invoice SET  tanggal=:tanggal, jumlah=:jumlah, ongkir=:ongkir,"
                "total=:total, statinv=:statinv, alamat=:alamat, kota=:kota, kodepos=:kodepos,telepon=:telepon,tarif=:tarif,jmlberat=:jmlberat,namapenerima=:namapenerima,idplg=:idplg WHERE idinvoice=:idinvoice");
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    sql.bindValue(":tanggal",ui->tanggalDateEdit->date());
    sql.bindValue(":jumlah",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    sql.bindValue(":total",ui->totalLineEdit->text().toInt());
    sql.bindValue(":statinv",ui->satusLineEdit->text().toInt());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":kota",ui->kotaLineEdit->text());
    sql.bindValue(":kodepos",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telepon",ui->teleponLineEdit->text().toInt());
    sql.bindValue(":tarif",ui->tarifLineEdit->text().toInt());
    sql.bindValue(":jmlberat",ui->jumlahBeratLineEdit->text().toInt());
    sql.bindValue(":namapenerima",ui->namaPenerimaLineEdit->text());
    sql.bindValue(":idplg",ui->idplgLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil DiUpdate";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Forminvoice::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);
    sql.prepare("DELETE FROM tbl_invoice WHERE idinvoice=:idinvoice");
    sql.bindValue(":idinvoice",ui->idInvoiceLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

