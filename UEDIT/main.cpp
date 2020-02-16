#include <iostream>
#include <string.h>
#include "ListaCircular.h"
#include "NodoArchivo.h"
#include "ListaDoble.h"
#include "NodoCaracter.h"
#include "Pila.h"
#include "NodoLog.h"

using namespace std;

int main()
{


    cout << "[EDD]HT1_201503836" << endl;

    //Probar método de lista circular

    ListaCircular *archivos = new ListaCircular();
    NodoArchivo *a1 = new NodoArchivo();
    NodoArchivo *a2 = new NodoArchivo();
    NodoArchivo *a3 = new NodoArchivo();
    NodoArchivo *a4 = new NodoArchivo();
    NodoArchivo *a5 = new NodoArchivo();

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

    //Probar metodo de lista doble enlazada

    ListaDoble *texto = new ListaDoble();
    NodoCaracter* c1 = new NodoCaracter();
    NodoCaracter* c2 = new NodoCaracter();
    NodoCaracter* c3 = new NodoCaracter();
    NodoCaracter* c4 = new NodoCaracter();
    NodoCaracter* c5 = new NodoCaracter();
    NodoCaracter* c6 = new NodoCaracter();
    NodoCaracter* c7 = new NodoCaracter();

    c1->setCaracter('1');
    c1->setAscii(int('1'));

    c2->setCaracter('0');
    c2->setAscii(int('0'));

    c3->setCaracter('0');
    c3->setAscii(int('0'));

    c4->setCaracter(' ');
    c4->setAscii(int(' '));

    c5->setCaracter('p');
    c5->setAscii(int('p'));

    c6->setCaracter('t');
    c6->setAscii(int('t'));

    c7->setCaracter('s');
    c7->setAscii(int('s'));

    texto->agregar(c1);
    texto->agregar(c2);
    texto->agregar(c3);
    texto->agregar(c4);
    texto->agregar(c5);
    texto->agregar(c6);
    texto->agregar(c7);

    texto->imprimir("forward");
    texto->imprimir("backwar");

    //Probar Metodo de Pila
    Pila* registros = new Pila();
    NodoLog *l1 = new NodoLog();
    NodoLog *l2 = new NodoLog();
    NodoLog *l3 = new NodoLog();
    NodoLog *l4 = new NodoLog();
    NodoLog *l5 = new NodoLog();

    l1->setPalabraB("Universidad");
    l1->setPalabraR("Palabra1");
    l1->setEstado("Revertido");
    l1->setPalabra("null");
    l1->setPosicion(0);

    l2->setPalabraB("Universidad");
    l2->setPalabraR("Palabra2");
    l2->setEstado("Revertido");
    l2->setPalabra("null");
    l2->setPosicion(0);

    l3->setPalabraB("de");
    l3->setPalabraR("Palabra3");
    l3->setEstado("No Revertido");
    l3->setPalabra("null");
    l3->setPosicion(0);

    l4->setPalabraB("San");
    l4->setPalabraR("Palabra4");
    l4->setEstado("Revertido");
    l4->setPalabra("null");
    l4->setPosicion(0);

    l5->setPalabraB("Carlos");
    l5->setPalabraR("Palabra5");
    l5->setEstado("No Revertido");
    l5->setPalabra("null");
    l5->setPosicion(0);

    registros->push(l1);
    registros->push(l2);
    registros->push(l3);
    registros->push(l4);
    registros->push(l5);

    registros->imprimir();

    return 0;
}
