#ifndef CIRCULO_H
#define CIRCULO_H

#include "FigurasGeometricas.h"

class Circulo : public FigurasGeometricas
{
    public:
        Circulo();
        Circulo(double raio);

        double getRaio();
        void setRaio(double raio);

        double CalcularArea();
    private:
        double raio;
};

#endif // CIRCULO_H
