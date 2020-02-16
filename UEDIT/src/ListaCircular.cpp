#include "ListaCircular.h"

#include <iostream>
using namespace std;

ListaCircular::ListaCircular()
{
    this->inicio = NULL;
    this->contador = 0;
}

ListaCircular::~ListaCircular()
{
    //Eliminar lista
    NodoArchivo *nodo;

    //Mientras la lista tenga más de un nodo
    while(inicio->getSiguiente() != inicio) {
        //Borrar el nodo siguiente al apuntado por lista
        nodo = inicio->getSiguiente();
        inicio->setSiguiente(inicio->getSiguiente());
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
        inicio->setSiguiente(nodo);
        contador += 1;
    } else{
        //Insertar al final
        NodoArchivo *temp = inicio;

        while (temp->getSiguiente() != inicio){
            temp = temp->getSiguiente();
        }

        temp->setSiguiente(nodo);
        nodo->setSiguiente(inicio);

    }
}

void ListaCircular::eliminar(NodoArchivo *nodo){
    //Eliminar Nodo de la lista
    NodoArchivo *temp;

    temp = inicio;

   // Hacer que lista apunte al nodo anterior al de valor v
   do {
      if(inicio->getSiguiente()->getNombre() != nodo->getNombre()) inicio = inicio->getSiguiente();
   } while(inicio->getSiguiente()->getNombre() != nodo->getNombre() && inicio != temp);
   // Si existe un nodo:
   if(inicio->getSiguiente()->getNombre() == nodo->getNombre()) {
      // Y si la lista sólo tiene un nodo
      if(inicio == inicio->getSiguiente()) {
         // Borrar toda la lista
         delete inicio;
         inicio = NULL;
      }
      else {
         // Si la lista tiene más de un nodo, borrar el nodo  de valor v
         temp = inicio->getSiguiente();
         inicio->setSiguiente(temp->getSiguiente());
         delete temp;
      }
   }

}

bool ListaCircular::estaVacio(){
    //Verificar si la lista está vacia
    return this->inicio == NULL;
}

void ListaCircular::imprimir(){
    //Imprimir lista en consola
    NodoArchivo *temp = inicio;

    cout << "| Lista de archivos \n| Lista circular simple" << endl;
    cout << "\t|> Inicio" << endl;
    do {
        temp->imprimir();
        temp = temp->getSiguiente();
    } while(temp != inicio);

    cout << "\t|-> Inicio" << endl;

}

string ListaCircular::graphviz(){
    //Generar gráfico .dot de la lista
}
