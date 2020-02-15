/* 
 * File:   ListaCircular.cpp
 * Author: KByteGt
 * 
 * Lista Circular Simple
 */

#include <string.h>
#include <iostream>
using namespace std;

import "NodoArchivo.cpp";

class ListaCircular{
private:
    int contador;
    NodoArchivo *inicio;

public:
    ListaCircular();
    ~ListaCircular();

    void agregar(NodoArchivo *);
    void eliminar(NodoArhivo *);
    bool estaVacio();
    void imprimir();
    string graphviz();
};

/* ============================= */

ListaCircular::ListaCircular(){
    this->inicio = NULL;
    this->contador = 0;
}

ListaCircular::~ListaCircular(){
    //Eliminar lista
    NodoArchivo nodo;

    //Mientras la lista tenga más de un nodo
    while(inicio->siguiente != inicio) {
        //Borrar el nodo siguiente al apuntado por lista
        nodo = inicio->siguiente;
        inicio->siguiente = inicio->siguiente;
        delete nodo;
    }
    //Borrar el último nodo
    delete inicio;
    inicio = NULL;
}

void ListaCircular::agregar(NodoArchivo *nodo){
    //Agregar Nodo a la lista
    if(estaVacio()){
        //No hay nodo y agragar nuevo
        inicio = nodo;
        inicio->siguiente = nodo;
        contador += 1;
    } else{
        //Insertar al final
        NodoArchivo *temp = inicio;

        while (temp->siguiente != inicio){
            temp = temp->siguiente;
        }

        temp->siguiente = node;
        node->siguiente = inicio;
        
    }
}

void ListaCircular::eliminar(NodoArhivo *nodo){
    //Eliminar Nodo de la lista
}

bool ListaCircular::estaVacio(){
    //Verificar si la lista está vacia
    return this->inicio == NULL;
}

void ListaCircular::imprimir(){
    //Imprimir lista en consola
}

string ListaCircular::graphviz(){
    //Generar gráfico .dot de la lista
}