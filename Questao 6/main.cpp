#include <iostream>
#include "Conta.h"

using namespace std;

int main(){
    Conta *c = new Conta();
    
    c->setSaldo(5000);

    try{
        c->Sacar(5100);
    }catch(SaldoNaoDisponivelException e){
        std::cerr << e.what() << endl;
    }
    
    return 0;
}
