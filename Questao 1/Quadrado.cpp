#include "Quadrado.h"

Quadrado::Quadrado()
{
    nome = "Quadrado";
    lado = 0;
}

Quadrado::Quadrado(double lado){
    nome = "Quadrado";
    setLado(lado);
}

double Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(double lado){
    if(lado > 0)
        this->lado = lado;
    else
        this->lado = 0;
}

double Quadrado::CalcularArea(){
    return lado*lado;
}

