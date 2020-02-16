#include <iostream>
#include <string.h>
#include "ListaCircular.h"
#include "NodoArchivo.h"
#include "ListaDoble.h"
#include "NodoCaracter.h"

using namespace std;

int main()
{
    ListaCircular *archivos = new ListaCircular();
    NodoArchivo *a1 = new NodoArchivo();
    NodoArchivo *a2 = new NodoArchivo();
    NodoArchivo *a3 = new NodoArchivo();
    NodoArchivo *a4 = new NodoArchivo();
    NodoArchivo *a5 = new NodoArchivo();

    cout << "[EDD]HT1_201503836" << endl;

    //Probar método de lista circular

    a1->setId(1);
    a1->setNombre("archivo1.txt");
    a1->setRuta("/home/user/archivo1.txt");

    a2->setId(2);
    a2->setNombre("archivo2.txt");
    a2->setRuta("/home/user/archivo2.txt");

    a3->setId(3);
    a3->setNombre("archivo3.txt");
    a3->setRuta("/home/user/archivo3.txt");

    a4->setId(4);
    a4->setNombre("archivo4.txt");
    a4->setRuta("/home/user/archivo4.txt");

    a5->setId(5);
    a5->setNombre("archivo5.txt");
    a5->setRuta("/home/user/archivo5.txt");


    archivos->agregar(a1);
    archivos->agregar(a2);
    archivos->agregar(a3);
    archivos->agregar(a4);
    archivos->agregar(a5);

    //archivos->eliminar(a3);


    archivos->imprimir();


    return 0;
}
