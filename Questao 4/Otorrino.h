#ifndef OTORRINO_H
#define OTORRINO_H

#include <iostream>
#include "Medico.h"

class Otorrino : public Medico{
    public:
        Otorrino();
        ~Otorrino();

        virtual void RealizarCirurgia();
};

#endif