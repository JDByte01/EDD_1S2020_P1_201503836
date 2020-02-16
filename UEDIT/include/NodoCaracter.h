#ifndef NODOCARACTER_H
#define NODOCARACTER_H

#include <string.h>
#include <iostream>
using namespace std;

class NodoCaracter
{
    public:
        NodoCaracter();
        virtual ~NodoCaracter();

        void setCaracter(char c){ this->caracter = c; }
        void setAscii(int a){ this->ascii = a; }
        void setSiguiente(NodoCaracter *n){ this->siguiente = n; }
        void setAnterior(NodoCaracter *n){ this->anterior = n;}
        char getCaracter(){ return this->caracter;}
        int getAscii(){ return this->ascii; }
        NodoCaracter* getSiguiente(){ return this->siguiente;}
        NodoCaracter* getAnterior(){ return this->anterior;}
        void imprimir();
        string graphviz();

    protected:

    private:
        char caracter;
        int ascii;
        NodoCaracter *siguiente;
        NodoCaracter *anterior;
};

#endif // NODOCARACTER_H
