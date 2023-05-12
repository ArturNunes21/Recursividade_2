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
    bool contemLetras(const QString&);
    QString converterBase(int, QString);
    QList<QString> inverterString(QString, QList<QString>&);
};
}; //namespace
#endif // CLASSERECURSIVA_H
