#include <iostream>

#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FigurasGeometricas *t1 = new Triangulo(7,9);
    FigurasGeometricas *q1 = new Quadrado(12);
    FigurasGeometricas *c1 = new Circulo(7);

    cout << "Nome da figura: " << t1->getNome() << "\nArea: " << t1->CalcularArea() << "m^2" << endl << endl;
    cout << "Nome da figura: " << q1->getNome() << "\nArea: " << q1->CalcularArea() << "m^2" << endl << endl;
    cout << "Nome da figura: " << c1->getNome() << "\nArea: " << c1->CalcularArea() << "m^2" << endl;

    return 0;
}
