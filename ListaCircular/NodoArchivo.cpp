/* 
 * File:   ListaCircular.cpp
 * Author: KByteGt
 * 
 * Nodo Lista Circular Simple
 */

#include <string.h>
#include <iostream>
using namespace std;

class NodoArchivo {
private:
    int id;
    string nombre;
    string ruta;
    NodoArchivo *siguiente;

public:
    NodoArchivo();
    NodoArchivo(int, string, string);
    ~NodoArchivo();

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
};

NodoArchivo::NodoArchivo(){
    this->id = 0;
    this->nombre = "";
    this->ruta = ""; 
}

NodoArchivo::NodoArchivo(int id, string nombre, string ruta){
    this->id = id;
    this->nombre = nombre;
    this->ruta = ruta;
}

NodoArchivo::~NodoArchivo(){
    //Eliminar Nodo
    this->id = 0;
    this->nombre = "";
    this->ruta = "";
    this->siguiente = NULL;
}

void NodoArchivo::imprimir(){
    //Imprimir valor de nodo
    cout << this->nombre << " || " << this->ruta;
}

string NodoArchivo::graphviz(){
    //Generar codigo Graphviz para el nodo
    return "";
}
