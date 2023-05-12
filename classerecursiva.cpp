#include "classerecursiva.h"
#include <QString>
#include <QList>

namespace Artur{

int classeRecursiva::imprimirCubo(int valor, int res){
    if(valor>0){
        res+=(valor*valor*valor);
        return imprimirCubo(valor-1, res);
    }else{
        return res;
    }
}

QString classeRecursiva::imprimirDecrescente(int valor, QString res){
    if(valor>=0){
        if(res!="")
            res+=" - ";
        res+=QString::number(valor);
        return imprimirDecrescente(valor-1, res);
    }else{
        return res;
    }
}

int classeRecursiva::menorValor(QList<int> lista, int i, int menor){
    if(i==lista.length()){
        return menor;
    }else{
        int aux=lista.at(i);
        if(aux<menor){  //é menor
            menor=aux;
        }
        return menorValor(lista, i+1, menor);
    }
}

bool classeRecursiva::contemLetras(const QString& str) {
    for (QChar c : str) {
        if (c.isLetter()) {
            return true;
        }
    }
    return false;
}

QString classeRecursiva::converterBase(int valor, QString res){
    if(valor/2==1){  //fim das divisões
        return res;
    }
    if(valor%2==0){  //é divisível
        res+="0";
    }else{  //não é divisível
        res+="1";
    }
    return converterBase(valor/2, res);
}

QList<QString> classeRecursiva::inverterString(QString aux, QList<QString>& res){
    static int i=0;
    if(i==aux.length()){
        return res;
    }else{
        res.prepend(aux.at(i));
        i+=1;
        return inverterString(aux, res);
    }
}

}  //namespace
