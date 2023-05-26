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

bool classeRecursiva::contemLetras(const QString& str, int i) {
    if (i >= str.length()) {
        return false;
    } else if (str[i].isLetter()) {
        return true;
    } else {
        return contemLetras(str, i+1);
    }
}

QString classeRecursiva::converterBase(int valor, QString res, int referencia){
    if(valor<2){  //fim das divisões
        res+="1";
        if(referencia<=15)
            res=verificarTamanho(res);
        return res;
    }
    if(valor%2==0){  //é divisível
        res+="0";
    }else{  //não é divisível
        res+="1";
    }
    return converterBase(valor/2, res, referencia);
    //é melhor colocar o return dentro do if e do else?
}

QString classeRecursiva::inverterString(QString str){
    if (str.length() <= 1) {
        return str;
    }else{
        return inverterString(str.right(str.length() - 1)) + str.at(0);
    }
    //Esta função passa como parâmetro uma string sem o primeiro caracter
    //até que a string posua tamanho <= a 1, assim, a string contendo
    //apenas um caracter, recebe o primeiro caracter anterior a esta string
    //antes de retira-lo, colocando ele ao final da string, criando um
    //processo de inversão na volta da pilha de chamada
}

QString classeRecursiva::verificarTamanho(QString verificar){
    if(verificar.length()<4)
        return verificarTamanho(verificar+="0");
    return verificar;
}

int classeRecursiva::exponencial(int base, int expoente, int i, int res){
    if(base==0)
        return 1;
    if(i<expoente){
        return exponencial(base, expoente, i+1, res*=base);
    }else{
        return res;
    }
}

int classeRecursiva::multiplica(int n1, int n2, int i, int res){
    if(n1==1)
        return n2;
    if(n1==0 || n2==0)
        return 0;
    if(i<n2){
        return multiplica(n1, n2, i+1, res+=n1);
    }else{
        return res;
    }
}


}  //namespace
