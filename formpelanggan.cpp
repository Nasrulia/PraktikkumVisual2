#include "formpelanggan.h"
#include "ui_formpelanggan.h"

Formpelanggan::Formpelanggan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formpelanggan)
{
    ui->setupUi(this);
}

Formpelanggan::~Formpelanggan()
{
    delete ui;
}

void Formpelanggan::on_pushButton_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("INSERT INTO tbl_pelanggan(idplg,email,password,nama_plg,alamat_plg,kodepos_plg,telp_plg,tgl_dftr,tgl_login,tanya,jawab,id_kota,kota_plg)"
                "VALUE(:idplg,:email,:password,:nama_plg,:alamat_plg,:kodepos_plg,:telp_plg,:tgl_dftr,:tgl_login,:tanya,:jawab,:id_kota,:kota_plg)");
    sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
    sql.bindValue(":email",ui->emailLineEdit->text());
    sql.bindValue(":password",ui->passwordLineEdit->text());
    sql.bindValue(":nama_plg",ui->namaPelangganLineEdit->text());
    sql.bindValue(":alamat_plg",ui->alamatPelangganLineEdit->text());
    sql.bindValue(":kodepos_plg",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telp_plg",ui->telponLineEdit->text().toInt());
    sql.bindValue(":tgl_dftr",ui->tanggalDaftarDateEdit->date());
    sql.bindValue(":tgl_login",ui->tanggalLoginDateEdit->date());
    sql.bindValue(":tanya",ui->tanyaLineEdit->text());
    sql.bindValue(":jawab",ui->jawabLineEdit->text());
    sql.bindValue(":id_kota",ui->idKotaLineEdit->text());
     sql.bindValue(":kota_plg",ui->kotaPelangganLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formpelanggan::on_pushButton_2_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("UPDATE tbl_pelanggan SET email=:email, password=:password, nama_plg=:nama_plg, alamat_plg=:alamat_plg,"
                "kodepos_plg=:kodepos_plg, telp_plg=:telp_plg, tgl_dftr=:tgl_dftr, tgl_login=:tgl_login, tanya=:tanya,jawab=:jawab,id_kota=:id_kota, kota_plg=:kota_plg WHERE idplg=:idplg");
    sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
    sql.bindValue(":email",ui->emailLineEdit->text());
    sql.bindValue(":password",ui->passwordLineEdit->text());
    sql.bindValue(":nama_plg",ui->namaPelangganLineEdit->text());
    sql.bindValue(":alamat_plg",ui->alamatPelangganLineEdit->text());
    sql.bindValue(":kodepos_plg",ui->kodePosLineEdit->text().toInt());
    sql.bindValue(":telp_plg",ui->telponLineEdit->text().toInt());
    sql.bindValue(":tgl_dftr",ui->tanggalDaftarDateEdit->date());
    sql.bindValue(":tgl_login",ui->tanggalLoginDateEdit->date());
    sql.bindValue(":tanya",ui->tanyaLineEdit->text());
    sql.bindValue(":jawab",ui->jawabLineEdit->text());
    sql.bindValue(":id_kota",ui->idKotaLineEdit->text());
    sql.bindValue(":kota_plg",ui->kotaPelangganLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Update";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formpelanggan::on_pushButton_3_clicked()
{
    QSqlQuery sql(Koneksi);

    sql.prepare("DELETE FROM tbl_pelanggan WHERE idplg=:idplg");
    sql.bindValue(":idplg",ui->idpelangganLineEdit->text());
    if(sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}

