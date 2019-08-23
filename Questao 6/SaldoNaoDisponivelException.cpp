#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException(){
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException(){
}

std::string SaldoNaoDisponivelException::what(){
    return erro;
}