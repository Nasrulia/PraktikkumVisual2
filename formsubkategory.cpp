#include "formsubkategory.h"
#include "ui_formsubkategory.h"

FormsubKategory::FormsubKategory(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormsubKategory)
{
    ui->setupUi(this);
}

FormsubKategory::~FormsubKategory()
{
    delete ui;
}

void FormsubKategory::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_sub_kategori(idsubkat,namasubkat,idkat)"
                "VALUE(:idsubkat,:namasubkat,:idkat)");
    sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
    sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormsubKategory::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_sub_kategori SET namasubkat=:namasubkat, idkat=:idkat WHERE idsubkat =:idsubkat ");
    sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
    sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Update";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormsubKategory::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_sub_kategori WHERE idsubkat =:idsubkat ");
    sql.bindValue(":idsubkat",ui->idSubKetegoriLineEdit->text());
    sql.bindValue(":namasubkat",ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat",ui->idKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

