//
// Created by madri on 3/10/2020.
//

#include "VectorPersonas.h"
VectorPersonas::VectorPersonas(){
    setClassName("Array de personas");
    for (int i = 0; i < array.size(); i++)
    {
        Register("Persona",array.getItem(i));
    }
}

std::string VectorPersonas::toString() {
    ostringstream out;
    for (int i = 0; i < array.size(); i++)
    {
        out << array.getItem(i)->toString();
    }
    return out.str();
}

void VectorPersonas::insertar(Persona* persona) {
    array.addItem(persona);
}