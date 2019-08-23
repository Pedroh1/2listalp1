#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Funcionario.h"

using namespace std;

int main(){

    SistemaGerenciaFolha a = SistemaGerenciaFolha();

    Funcionario *ass = new Assalariado();
    Funcionario *com = new Comissionado();
    Funcionario *hor = new Horista();

    ass->setNome("Pedro Henrique");
    ass->setMatricula(231);
    ((Assalariado *)ass)->setSalario(1500);

    com->setNome("Ana Maria");
    com->setMatricula(225);
    ((Comissionado *)com)->setSalarioBase(998);
    ((Comissionado *)com)->setVendasSemanais(700);
    ((Comissionado *)com)->setPercentualComissao(15);

    hor->setNome("Claudio Jose");
    hor->setMatricula(758);
    ((Horista *)hor)->setSalarioPorHora(45);
    ((Horista *)hor)->setHorasTrabalhadas(40);

    a.setFuncionario(ass);
    a.setFuncionario(com);
    a.setFuncionario(hor);

    cout << ass->toString();
    cout << com->toString();
    cout << hor->toString() << endl;

    cout << "Total de pagamento na folha: " << a.calculaValorTotalFolha() << endl;
    cout << "Salario do funcionario de matricula 225: " << a.consultaSalarioFuncionario(225) << endl;

    try{
        cout << "Salario funcionario de matricula 16758: " << a.consultaSalarioFuncionario(16758) << endl;
    }catch(FuncionarioNaoExisteException e){
        cout << e.what() << endl;
    }
    return 0;
}
