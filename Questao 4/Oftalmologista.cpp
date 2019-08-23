#include "Oftalmologista.h"

using namespace std;

Oftalmologista::Oftalmologista(){
    nome = " ";
    especialidade = "Oftalmologista";
    altura = peso = 0;
}

Oftalmologista::~Oftalmologista(){
    
}

void Oftalmologista::RealizarCirurgia(){
    cout << "Realizando cirurgia de oftalmologista." << endl;
}
