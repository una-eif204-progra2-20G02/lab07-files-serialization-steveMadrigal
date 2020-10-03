//
// Created by madri on 3/10/2020.
//

#ifndef INVESTIGATION_DELTA_PERSONA_H
#define INVESTIGATION_DELTA_PERSONA_H

#include <iostream>
#include <fstream> //usar las funciones de escritura y lectura
#include <string.h> //pasar de string cadena de char
#include <vector>
#include <sstream>
#include "XMLSerialization.h"
using namespace xmls;
using namespace std;

struct Persona : public Serializable{
public:
    xString nombre;
    xInt edad;
    xString id;
public:
    Persona();
    string toString();

};


#endif //INVESTIGATION_DELTA_PERSONA_H
