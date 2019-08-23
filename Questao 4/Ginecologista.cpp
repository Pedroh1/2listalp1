#include "Ginecologista.h"

using namespace std;

Ginecologista::Ginecologista(){
    nome = " ";
    especialidade = "Ginecologista";
    altura = peso = 0;
}

Ginecologista::~Ginecologista(){
    
}

void Ginecologista::RealizarCirurgia(){
    cout << "Realizando cirurgia de ginecologista." << endl;
}
