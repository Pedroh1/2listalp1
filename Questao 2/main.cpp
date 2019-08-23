#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *c = new Conta();
    ContaEspecial *ce = new ContaEspecial();

    c->Depositar(7000);
    ce->Depositar(9000);

    cout << "Saldo conta: " << c->getSaldo() << endl;
    cout << "Saldo conta especial: " << ce->getSaldo() << endl;

    c->Sacar(1500);
    ce->Sacar(2200);

    cout << "Saldo conta: " << c->getSaldo() << endl;
    cout << "Saldo conta especial : " << ce->getSaldo() << endl;

    c->setSalarioMensal(12000);
    c->DefinirLimite();

    ce->setSalarioMensal(5000);
    ce->DefinirLimite();

    cout << "Limite conta: " << c->getLimite() << endl;
    cout << "Limite conta especial: " << ce->getLimite() << endl;

    return 0;
}
