#include "Cirurgiao.h"

using namespace std;

Cirurgiao::Cirurgiao(){
    nome = " ";
    especialidade = "Cirurgiao";
    altura = peso = 0;
}

Cirurgiao::~Cirurgiao(){
    
}

void Cirurgiao::RealizarCirurgia(){
    cout << "Realizando cirurgia de cirurgiao." << endl;
}
