cmake_minimum_required(VERSION 3.17)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        main.cpp
        Persona.cpp
        Persona.h
        ServicioPersonasConPersistencia.cpp
        ServicioPersonasConPersistencia.h
        tinyxml2.cpp
        tinyxml2.h
        VectorPersonas.cpp
        VectorPersonas.h
        XMLSerialization.cpp
        XMLSerialization.h)
