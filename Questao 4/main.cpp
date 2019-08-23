#include <iostream>
#include "Ginecologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Oftalmologista.h"

using namespace std;

int main(){
    Medico *c = new Cirurgiao();
    Medico *g = new Ginecologista();
    Medico *ot = new Otorrino();
    Medico *of = new Oftalmologista();

    cout << c->getEspecialidade() << ":\n";
    c->RealizarCirurgia();
    cout << endl;
    
    cout << g->getEspecialidade() << ":\n";
    g->RealizarCirurgia();
    cout << endl;
    
    cout << ot->getEspecialidade() << ":\n";
    ot->RealizarCirurgia();
    cout << endl;
    
    cout << of->getEspecialidade() << ":\n";
    of->RealizarCirurgia(); 
    cout << endl;

    return 0;
}
