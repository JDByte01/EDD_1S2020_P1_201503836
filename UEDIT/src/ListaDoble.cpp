#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    this->inicio = NULL;
    this->contador = 0;
}

ListaDoble::~ListaDoble()
{
    //dtor
}

void ListaDoble::agregar(NodoCaracter* nodo){
    NodoCaracter *temp;
    if(estaVacio()){
       this->inicio = nodo;
       contador += 1;
    } else {
        temp = inicio;
        while(temp->getSiguiente() != NULL){
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(nodo);
        nodo->setAnterior(temp);
        contador += 1;
    }
}

void ListaDoble::eliminar(NodoCaracter *nodo){

}

bool ListaDoble::estaVacio(){
    return this->inicio == NULL;
}

void ListaDoble::imprimir(string direccion){
    cout << "| Lista de caracteres \n| Lista circular Doble" << endl;
    if(!estaVacio()){
        NodoCaracter* temp;
        if(direccion == "forward"){
            //Lista de inicio a fin
            temp = this->inicio;
            cout << "\t|> Forward" << endl;
            while(temp->getSiguiente() != NULL){
                //Mostrar lista
                temp->imprimir();
                temp = temp->getSiguiente();
            }
            temp->imprimir();
            cout << "\t|> NULL" << endl;
        } else if(direccion == "backwar"){
            //Lista de fina a inicio
            temp = this->inicio;
            cout << "\t|> Backwar" << endl;
            while(temp->getSiguiente() != NULL){
                temp = temp->getSiguiente();
            }
            while(temp->getAnterior() != NULL){
                //Mostrar lista
                temp->imprimir();
                temp = temp->getAnterior();
            }
            temp->imprimir();
            cout << "\t|> NULL" << endl;
        } else {
            cout << "\t| **Error de direccion" << endl;
        }
    }else{
    cout << "\t| lista vacia" << endl;
    }
}

string ListaDoble::graphviz(){
    return "-";
}
