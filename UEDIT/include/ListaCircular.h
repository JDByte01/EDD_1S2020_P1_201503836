#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include <string.h>
#include <iostream>
#include <NodoArchivo.h>

using namespace std;

class ListaCircular
{
    public:
        ListaCircular();
        virtual ~ListaCircular();
        void agregar(NodoArchivo *nodo);
        void eliminar(NodoArchivo *nodo);
        bool estaVacio();
        void imprimir();
        string graphviz();

    protected:

    private:
        int contador;
        NodoArchivo *inicio;
};

#endif // LISTACIRCULAR_H
