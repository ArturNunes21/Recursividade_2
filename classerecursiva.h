#ifndef CLASSERECURSIVA_H
#define CLASSERECURSIVA_H
#include <QString>

namespace Artur{

class classeRecursiva
{
public:
    int imprimirCubo(int ,int);
    QString imprimirDecrescente(int, QString);
    int menorValor(QList<int>, int, int);
    bool contemLetras(const QString&, int);
    QString converterBase(int, QString);
    QString inverterString(QString);
    int exponencial(int, int, int, int);
    int multiplica(int, int, int, int);
};
}; //namespace
#endif // CLASSERECURSIVA_H
