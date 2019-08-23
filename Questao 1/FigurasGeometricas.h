#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>

class FigurasGeometricas
{
    public:
        FigurasGeometricas();
        virtual ~FigurasGeometricas();

        std::string getNome();

        virtual double CalcularArea() = 0;
    protected:
        std::string nome;
};

#endif // FIGURASGEOMETRICAS_H
