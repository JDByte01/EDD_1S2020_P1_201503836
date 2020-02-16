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
        void imprimir();

    protected:

    private:
        NodoLog* inicio;
        int contador;
};

#endif // PILA_H
