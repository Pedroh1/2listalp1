#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FigurasGeometricas.h"

class Triangulo : public FigurasGeometricas
{
    public:
        Triangulo();
        Triangulo(double base, double altura);

        double getBase();
        double getAltura();

        void setBase(double base);
        void setAltura(double altura);

        double CalcularArea();
    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
