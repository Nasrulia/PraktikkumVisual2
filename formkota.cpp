#include "formkota.h"
#include "ui_formkota.h"

Formkota::Formkota(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formkota)
{
    ui->setupUi(this);
}

Formkota::~Formkota()
{
    delete ui;
}

void Formkota::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_kota(idkota,namakota,ongkir)"
                "VALUE(:idkota,:namakota,:ongkir)");
    sql.bindValue(":idkota",ui->idKotaLineEdit->text());
    sql.bindValue(":namakota",ui->namaKotaLineEdit->text());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkota::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_kota SET namakota=:namakota, ongkir=:ongkir WHERE idkota=:idkota");
    sql.bindValue(":idkota",ui->idKotaLineEdit->text());
    sql.bindValue(":namakota",ui->namaKotaLineEdit->text());
    sql.bindValue(":ongkir",ui->ongkirLineEdit->text().toInt());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Diupdate";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkota::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_kota WHERE idkota=:idkota");
    sql.bindValue(":idkota",ui->idKotaLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

