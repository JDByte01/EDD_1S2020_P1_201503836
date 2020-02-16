#include "NodoCaracter.h"

NodoCaracter::NodoCaracter()
{
    this->caracter = '0';
    this->ascii = 0;
    this->siguiente = NULL;
    this->anterior = NULL;
}

NodoCaracter::~NodoCaracter()
{
    //dtor
}

void NodoCaracter::imprimir(){
    cout << "\t|-> [" << this->ascii << "] " << this->caracter << endl;
}

string NodoCaracter::graphviz(){
    return "\t|-> [" + to_string(this->ascii) + "] " + this->caracter;
}
