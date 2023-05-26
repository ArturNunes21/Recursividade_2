#include "classeiterativa.h"
#include <QString>
#include <QList>
#include <cmath>

namespace Artur{

int classeIterativa::imprimirCubo(int valor){
    int res;
    for(res=1; valor>1; valor--){
        res+=pow(valor,3);
    }
    return res;
}

QString classeIterativa::imprimirDecrescente(int valor){
    QString res="";
    while(valor>=0){
        if(res!="")
            res+=" - ";
        res+=QString::number(valor);
        valor--;
    }
    return res;
}

bool classeIterativa::contemLetras(const QString& str) {
    for(int i=0; i<str.length(); i++){
        if(str[i].isLetter())
            return true;
        }
    return false;
}

int classeIterativa::menorValor(QList<int> lista){
    int menor=lista[0];
    for(int i=0; i<lista.length(); i++){
        int aux=lista.at(i);
        if(aux<menor){  //é menor
            menor=aux;
        }
    }
    return menor;
}

QString classeIterativa::converterBase(int valor){
    QString res="";
    int referencia=valor;
    for(valor=valor; valor>=2; valor/=2){
        if(valor%2==0){  //é divisível
            res+="0";
        }else{  //não é divisível
            res+="1";
        }
    }
    res+="1";
    if(referencia<=15){ //Indica que o valor convertido para binário possui 4 digitos
        while(res.size()<4){
            res+="0"; //Adiciona um 0, que na inversão ficara do lado esquerdo do numero
        }
    }
    return res;
}

QString classeIterativa::inverterString(QString valor){
    QString invertida="";
    for(int i=valor.length(); i>0; i--){
        invertida+=valor[i];
    }
    return invertida;
}

int classeIterativa::exponencial(int base, int expoente){
    int resultado=1;
    for(int i=0; i<expoente; i++){
        resultado*=base;
    }
    return resultado;
}

int classeIterativa::multiplica(int a, int b){
    int aux=0;
    for(int i=0; i<b; i++){
        aux+=a;
    }
    return aux;
}

}   //namespace















































































