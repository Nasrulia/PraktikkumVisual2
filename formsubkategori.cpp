#include "formsubkategori.h"
#include "ui_formsubkategori.h"

Formsubkategori::Formsubkategori(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formsubkategori)
{
    ui->setupUi(this);
}

Formsubkategori::~Formsubkategori()
{
    delete ui;
}

void Formsubkategori::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_sub_kategori(idsubkat,namasubkat,idkat)"
                "VALUE(:idsubkat,:namasubkat,:idkat)");
    sql.bindValue(":idsubkat", ui->idSubKategoriLineEdit->text());
    sql.bindValue(":namasubkat", ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat", ui->idKategoriLineEdit->text());
    if (sql.exec()) {
        qDebug() << "Data Berhasil Disimpan";
    } else {
        qDebug() << sql.lastError().text();
    }
}

void Formsubkategori::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_sub_kategori SET namasubkat=:namasubkat, idkat=:idkat WHERE "
                "idsubkat=:idsubkat");
    sql.bindValue(":idsubkat", ui->idSubKategoriLineEdit->text());
    sql.bindValue(":namasubkat", ui->namaSubKategoriLineEdit->text());
    sql.bindValue(":idkat", ui->idKategoriLineEdit->text());
    if (sql.exec()) {
        qDebug() << "Data Berhasil Di Update";
    } else {
        qDebug() << sql.lastError().text();
    }
}

void Formsubkategori::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_sub_kategori WHERE idsubkat=:idsubkat");
    sql.bindValue(":idsubkat", ui->idSubKategoriLineEdit->text());
    if (sql.exec()) {
        qDebug() << "Data Berhasil Di Hapus";
    } else {
        qDebug() << sql.lastError().text();
    }
}
