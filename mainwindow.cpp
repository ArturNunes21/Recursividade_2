#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "classeRecursiva.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Artur::classeRecursiva r;

void MainWindow::on_btn_soma_recursivos_clicked()
{
    int valor;
    QString res;
    valor=ui->lineEdit_soma_recursivos->text().toInt();
    if(valor>=1){
        res=QString::number(r.imprimirCubo(valor, 0));
    }else{
        res="Valor inválido.";
    }
    ui->textEdit_soma_recursivos->setText(res);
}


void MainWindow::on_btn_imprimir_decrescente_clicked()
{
    int valor;
    QString res;
    valor=ui->lineEdit_imprimir_decrescente->text().toInt();
    if(valor>0){
        res=r.imprimirDecrescente(valor, "");
    }else{
        res="Valor inválido.";
    }
    ui->textEdit_imprimir_decrescente->setText(res);
}


void MainWindow::on_btn_vetor_clicked()
{
    QString valor;
    QString res;
    valor=ui->lineEdit_vetor->text();
    if(valor.length()>0){
        QStringList lista=valor.split(" ");
        QList<int> listaInteiros;
        for (QString valor : lista) {
            if (!r.contemLetras(valor)) {
                int valorInt = valor.toInt();
                listaInteiros.append(valorInt);
            }else{
                ui->textEdit_vetor->setText("Erro - Vetor contem letras.");
                return;
            }
        }
        int menor=listaInteiros.at(0);
        res=QString::number(r.menorValor(listaInteiros, 0, menor));
        ui->textEdit_vetor->setText(res);
    }else{
        res="Valor inválido.";
    }
    ui->textEdit_vetor->setText(res);
}


void MainWindow::on_btn_converter_base_clicked()
{
    int valor;
    QString convertida;
    QString aux;
    valor=ui->lineEdit_converter_base->text().toInt();
    if(valor>0){
        aux=r.converterBase(valor, ""); //converte da base 10 para base 2, com numero invertido
//        QList<QString> res;
//        convertida=(r.inverterString(aux, res)).join("");
//    }else{
//        convertida="Valor inválido.";
    }
    ui->textEdit_converter_base->setText(aux);
}

