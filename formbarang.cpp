#include "formbarang.h"
#include "ui_formbarang.h"

FormBarang::FormBarang(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormBarang)
{
    ui->setupUi(this);
}

FormBarang::~FormBarang()
{
    delete ui;
}

void FormBarang::on_pushButton_clicked()
{


    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_brng(id_brng,nm_brng,satuan,harga,keterangan,berat,dilihat,dibeli,kata_kunci,stock,idsubkat)"
                "VALUE(:id_brng,:nm_brng,:satuan,:harga,:keterangan,:berat,:dilihat,:dibeli,:kata_kunci,:stock,:idsubkat)");
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":berat",ui->beratLineEdit->text());
    sql.bindValue(":dilihat",ui->dilihatLineEdit->text().toInt());
    sql.bindValue(":dibeli",ui->dibeliLineEdit->text().toInt());
    sql.bindValue(":kata_kunci",ui->kataKunciLineEdit->text());
    sql.bindValue(":stock",ui->stokLineEdit->text().toInt());
    sql.bindValue(":idsubkat",ui->idSubKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

}


void FormBarang::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_brng SET  nm_brng=:nm_brng, satuan=:satuan, harga=:harga,"
                "keterangan=:keterangan, berat=:berat, dilihat=:dilihat, dibeli=:dibeli, kata_kunci=:kata_kunci,stock=:stock,idsubkat=:idsubkat WHERE id_brng=:id_brng");
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    sql.bindValue(":nm_brng",ui->namaBarangLineEdit->text());
    sql.bindValue(":satuan",ui->satuanLineEdit->text());
    sql.bindValue(":harga",ui->hargaLineEdit->text().toInt());
    sql.bindValue(":keterangan",ui->keteranganLineEdit->text());
    sql.bindValue(":berat",ui->beratLineEdit->text());
    sql.bindValue(":dilihat",ui->dilihatLineEdit->text().toInt());
    sql.bindValue(":dibeli",ui->dibeliLineEdit->text().toInt());
    sql.bindValue(":kata_kunci",ui->kataKunciLineEdit->text());
    sql.bindValue(":stock",ui->stokLineEdit->text().toInt());
    sql.bindValue(":idsubkat",ui->idSubKategoriLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Diupdate";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void FormBarang::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_brng WHERE id_brng=:id_brng");
    sql.bindValue(":id_brng",ui->idBarangLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

