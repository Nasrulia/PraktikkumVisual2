#include "formkategori.h"
#include "ui_formkategori.h"

Formkategori::Formkategori(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formkategori)
{
    ui->setupUi(this);
}

Formkategori::~Formkategori()
{
    delete ui;
}

void Formkategori::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_kategori(idkat,nama_kategori)"
                "VALUE(:idkat,:nama_kategori)");
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    sql.bindValue(":nama_kategori",ui->namaKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkategori::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_kategori SET nama_kategori=:nama_kategori WHERE idkat =:idkat ");
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    sql.bindValue(":nama_kategori",ui->namaKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Update";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkategori::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_kategori  WHERE idkat =:idkat ");
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di HAPUS";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

