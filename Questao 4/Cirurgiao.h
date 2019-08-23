#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include <iostream>
#include "Medico.h"

class Cirurgiao : public Medico{
    public:
        Cirurgiao();
        ~Cirurgiao();

        virtual void RealizarCirurgia();
};

#endif