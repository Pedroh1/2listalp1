#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include <iostream>
#include "Medico.h"

class Oftalmologista : public Medico{
    public:
        Oftalmologista();
        ~Oftalmologista();

        virtual void RealizarCirurgia();
};

#endif