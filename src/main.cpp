#include "ServicioPersonasConPersistencia.h"

int main() {


    VectorPersonas* arrayPers = new ServicioPersonasConPersistencia();

    auto* persona = new Persona;

    persona->nombre = "Mike";
    persona->edad = 26;
    persona->id = "1-2345-6430";


    arrayPers->insertar(persona);

    auto* persona1 = new Persona;

    persona1->nombre = "Ana";
    persona1->edad = 30;
    persona1->id = "1-2345-6987";

    arrayPers->insertar(persona1);

    auto* persona2 = new Persona;

    persona2->nombre = "Pedro";
    persona2->edad = 20;
    persona2->id = "4-2876-5436";

    arrayPers->insertar(persona2);

    // -------------------------------- toString del vector  ----------------------

    cout<<"\n\n\tLa impresion en pantalla del Arreglo de Personas es: \n\n" << arrayPers->toString()<<endl;

    // Ahora vamos a crear un archivo txt con estructura en XML:

    ofstream file;
    file.open("ArchivoVectorPersonas.txt"); //txt
    string xml = arrayPers->toXML();
    file << xml;
    file.close();

    cout << "\n\n\tEl archivo XML se debera ver algo asi:\n\n";

    cout << arrayPers->toXML();





    // Ahora voy a leer el archivo txt que esta serializado para cargarlo al vector

    ifstream archivo;
    string texto, xmlData;
    try { archivo.open("../ArchivoVectorPersonas.txt", ios::in); }
    catch (std::ifstream::failure a) {
        cerr << '\a' << "No se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo.eof()) {
        getline(archivo, texto);
        xmlData += texto;
    }
    archivo.close();


    if(Serializable::fromXML(xmlData, arrayPers)) {
        cout << arrayPers->toString();
    }else {
        cerr << '\a' << "El programa ha fallado.";
    }

    return 0;
};
