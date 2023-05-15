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
    valor=ui->lineEdit_vetor->text();   //recebe o valor digitado e armazena na variável
    if(valor.length()>0){   //caso o espaço não esteja vazio, executa...
        QStringList lista=valor.split(" "); //cria uma Lista de QString, usando como parâmetro de separação, o espaço ("")
        QList<int> listaInteiros;   //Cria uma QList de inteiros
        for (QString valor : lista) {   //percorre a QStringList, que é armazenado na variável 'valor'
            if (!r.contemLetras(valor, 0)) {
                int valorInt = valor.toInt();   //Valor QString é armazenado na nova variável como inteiro
                listaInteiros.append(valorInt); //Valor inteiro é adicionado a QList
            }else{  //Caso exista uma letra no vetor inserido, então...
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
    QString convertida="";
    QString aux;
    valor=ui->lineEdit_converter_base->text().toInt();  //Recebe valor a ser convertido
    if(valor>0){
        aux=r.converterBase(valor, ""); //converte da base 10 para base 2, com numero invertido
        convertida=r.inverterString(aux);
    }else{
        convertida="Valor inválido.";
    }
    ui->textEdit_converter_base->setText(convertida);
}


void MainWindow::on_btn_exponente_clicked()
{
    int base, expoente;
    QString res, b, e;
    base=ui->lineEdit_base->text().toInt();
    expoente=ui->lineEdit_expoente->text().toInt();
    b=ui->lineEdit_base->text();
    e=ui->lineEdit_expoente->text();
    if(r.contemLetras(b, 0) || r.contemLetras(e, 0)){   //se existem letras, mostra mensagem de erro
        res="Erro - contem letras.";
    }else{
        res=QString::number(r.exponencial(base, expoente, 0, 1));   //senão, calcula
    }
    ui->textEdit_exponente->setText(res);
}


void MainWindow::on_btn_multiplicacao_clicked()
{
    int n1, n2;
    QString res, a, b;
    n1=ui->lineEdit_n1->text().toInt();
    n2=ui->lineEdit_n2->text().toInt();
    a=ui->lineEdit_n1->text();
    b=ui->lineEdit_n2->text();
    if(r.contemLetras(a, 0) || r.contemLetras(b, 0)){   //se existem letras, mostra mensagem de erro
        res="Erro - contem letras.";
    }else{
        res=QString::number(r.multiplica(n1, n2, 0, 0));   //senão, calcula
    }
    ui->textEdit_multiplicacao->setText(res);
}

