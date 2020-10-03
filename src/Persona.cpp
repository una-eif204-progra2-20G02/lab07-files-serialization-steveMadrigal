//
// Created by madri on 3/10/2020.
//

#include "Persona.h"
//Definición de los métodos
Persona::Persona()
{
    setClassName("Persona");
    Register("Nombre", &nombre);
    Register("Edad", &edad);
    Register("Identificacion", &id);

}

string Persona::toString() {
    {
        ostringstream output;
        output << "Nombre: " << nombre.value() << endl;
        output << "Edad: " << edad.value() << endl;
        output << "Identificacion: " << id.value() << endl;

        return output.str();
    }
}
