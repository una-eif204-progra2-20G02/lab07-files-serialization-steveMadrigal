//
// Created by madri on 3/10/2020.
//

#ifndef INVESTIGATION_DELTA_VECTORPERSONAS_H
#define INVESTIGATION_DELTA_VECTORPERSONAS_H
#include "Persona.h"

class VectorPersonas : public Serializable
{
public:
    Collection<Persona> array;
    VectorPersonas();
    std::string toString();
    void insertar(Persona* persona);
};

#endif //INVESTIGATION_DELTA_VECTORPERSONAS_H
