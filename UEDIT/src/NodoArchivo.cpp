#include "NodoArchivo.h"

NodoArchivo::NodoArchivo()
{
    this->id = 0;
    this->nombre = "";
    this->ruta = "";
}

NodoArchivo::NodoArchivo(int id, string nombre, string ruta){
    this->id = id;
    this->nombre = nombre;
    this->ruta = ruta;
}

NodoArchivo::~NodoArchivo()
{
    //Eliminar Nodo
    this->id = 0;
    this->nombre = "";
    this->ruta = "";
    this->siguiente = NULL;
}

void NodoArchivo::imprimir(){
    //Imprimir valor de nodo
    cout << "\t|-> [" << this->id << "] " << this->nombre << " | " << this->ruta << endl;
}

string NodoArchivo::graphviz(){
    //Generar codigo Graphviz para el nodo
    return "\t|-> [" + to_string(this->id) + "] " + this->nombre + " | " + this->ruta;
}
