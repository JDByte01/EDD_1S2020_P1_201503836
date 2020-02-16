#ifndef NODOARCHIVO_H
#define NODOARCHIVO_H

#include <string.h>
#include <iostream>
using namespace std;

class NodoArchivo
{
    public:
        NodoArchivo();
        NodoArchivo(int, string, string);
        virtual ~NodoArchivo();

        void setId(int id) { this->id = id; }
        void setNombre(string n){ this->nombre = n; }
        void setRuta(string r){ this->ruta = r; }
        void setSiguiente(NodoArchivo *n){ this->siguiente = n;}
        int getId(){ return this->id; }
        string getNombre(){ return this->nombre; }
        string getRuta(){ return this->ruta; }
        NodoArchivo *getSiguiente(){ return this->siguiente;}
        void imprimir();
        string graphviz();

    protected:

    private:
        int id;
        string nombre;
        string ruta;
        NodoArchivo *siguiente;
};

#endif // NODOARCHIVO_H
