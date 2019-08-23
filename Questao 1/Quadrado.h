#ifndef QUADRADO_H
#define QUADRADO_H

#include "FigurasGeometricas.h"

class Quadrado : public FigurasGeometricas
{
    public:
        Quadrado();
        Quadrado(double lado);

        double getLado();
        void setLado(double lado);

        double CalcularArea();
    private:
        double lado;
};

#endif // QUADRADO_H
