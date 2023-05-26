#ifndef CLASSEITERATIVA_H
#define CLASSEITERATIVA_H
#include <QString>

namespace Artur{

class classeIterativa
{
public:
    int imprimirCubo(int);
    QString imprimirDecrescente(int);
    bool contemLetras(const QString&);
    int menorValor(QList<int>);
    QString converterBase(int);
    QString inverterString(QString);
    int exponencial(int, int);
    int multiplica(int, int);
};

}   //namespace
#endif // CLASSEITERATIVA_H
