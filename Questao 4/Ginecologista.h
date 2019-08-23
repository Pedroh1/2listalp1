#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include <iostream>
#include "Medico.h"

class Ginecologista : public Medico{
    public:
        Ginecologista();
        ~Ginecologista();

        virtual void RealizarCirurgia();
};

#endif