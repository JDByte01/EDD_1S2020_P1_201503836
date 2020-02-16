#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NodoCaracter.h"

class ListaDoble
{
    public:
        ListaDoble();
        virtual ~ListaDoble();

        void agregar(NodoCaracter *nodo);
        void eliminar(NodoCaracter *nodo);
        bool estaVacio();
        void imprimir(string direccion);
        string graphviz();

    protected:

    private:
        NodoCaracter *inicio;
        int contador;
};

#endif // LISTADOBLE_H
