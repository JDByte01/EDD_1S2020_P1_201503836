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

}

string NodoCaracter::graphviz(){
    return "-";
}
