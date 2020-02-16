#include "NodoLog.h"

NodoLog::NodoLog()
{
    this->palabraB = "";
    this->palabraR = "";
    this->estado = "";
    this->palabra = "";
    this->posicion = 0;
    this->siguiente = NULL;
}

NodoLog::~NodoLog()
{
    //dtor
}

void NodoLog::imprimir(){
    cout << "\t|-> Palabra buscada: " << this->palabraB << " | Reemplazada por: " << this->palabraR << " | Estado: " << this->estado << " | Palabra: " << this->palabra << " | Posicion: " << this->posicion << endl;
}

string NodoLog::graphviz(){
    return "-";
}
