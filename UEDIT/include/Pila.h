#ifndef PILA_H
#define PILA_H

#include "NodoLog.h"

class Pila
{
    public:
        Pila();
        virtual ~Pila();

        void push(NodoLog* nodo);
        void pop();
        NodoLog* peek();
        bool estaVacio();
        void imprimir();

    protected:

    private:
        NodoLog* ultimo;
        int contador;
};

#endif // PILA_H
