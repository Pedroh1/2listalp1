#include "FigurasGeometricas.h"

FigurasGeometricas::FigurasGeometricas()
{
    nome = " ";
}

FigurasGeometricas::~FigurasGeometricas()
{
    //dtor
}

std::string FigurasGeometricas::getNome(){
    return nome;
}
