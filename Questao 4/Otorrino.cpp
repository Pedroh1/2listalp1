#include "Otorrino.h"

using namespace std;

Otorrino::Otorrino(){
    nome = " ";
    especialidade = "Otorrino";
    altura = peso = 0;
}

Otorrino::~Otorrino(){
    
}

void Otorrino::RealizarCirurgia(){
    cout << "Realizando cirurgia de Otorrino" << endl;
}
