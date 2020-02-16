#include "Pila.h"

Pila::Pila(){
    this->ultimo = NULL;
    this->contador = 0;
}

Pila::~Pila(){
    //dtor
}

void Pila::push(NodoLog* nodo){
    //Insertar al final

    //Referencial ultimo a nodo siguiente
    nodo->setSiguiente(this->ultimo);
    //referenciamos al nuevo nodo a ultimo
    this->ultimo = nodo;
}

void Pila::pop(){
    //Eliminar el ultimo
    NodoLog* temp;
    if(!estaVacio()){
        temp = this->ultimo;
        this->ultimo = temp->getSiguiente();
        this->contador -= 1;
    } else {
        cout << "Pila vacia!" << endl;
    }
}

NodoLog* Pila::peek(){
    return this->ultimo;
}

bool Pila::estaVacio(){
    return this->ultimo == NULL;
}

void Pila::imprimir(){
    //Imprimir PIla
    NodoLog* temp = new NodoLog();
    cout << "| Lista de registros \n| Pila" << endl;
    cout << "\t|> Ultimo" << endl;
    //Sacar cada nodo de la pila
    if(!estaVacio()){
        temp = this->ultimo;
        while(temp->getSiguiente() != NULL){
            temp->imprimir();
            temp = temp->getSiguiente();
        }
        temp->imprimir();
    } else {
        cout << "\t| **Pila vacia" << endl;
    }
}
