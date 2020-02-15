/* 
 * File:   Menu.cpp
 * Author: JOSED
 * 
 * Created on 12 de febrero de 2020, 2:38
 */

#include "Menu.h"

#include <iostream>
#include <cstdlib>
import NodoPalabra.cpp;

using namespace std;

bool bandera;
char tecla;

Menu::Menu() {
    bandera = false;
}

Menu::Menu(const Menu& orig) {
}

Menu::~Menu() {
}

//=========================0

void Menu::menuHome(){
    bandera=false;

    do
    {
        system("cls");
        cin.clear();
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| UNIVERSIDAD DE SAN CARLOS DE GUATEMALA \t||" << endl;
        cout << "\t|| FACULTAD DE INGENIERIA \t\t\t||" << endl;
        cout << "\t|| ESTRUCTURA DE DATOS \t\t\t\t||" << endl;
        cout << "\t|| PRACTICA 1 \t\t\t\t\t||" << endl;
        cout << "\t|| JOSE DANIEL LOPEZ GONZALEZ \t\t\t||" << endl;
        cout << "\t|| 201503836 \t\t\t\t\t||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| ==============| .:: MENU ::. |============== ||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| \t\t\t\t\t\t||" << endl;
        cout << "\t|| \t1 .- Crear Archivo \t\t\t||" << endl;
        cout << "\t|| \t2 .- Abrir Archivo \t\t\t||" << endl;
        cout << "\t|| \t3 .- Archivos Recientes \t\t||" << endl;
        cout << "\t|| \t4 .- Salir \t\t\t\t||" << endl;
        cout << "\t|| \t\t\t\t\t\t||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| \t\t\t\t\t\t||" << endl;
        cout << "\t|| *** Elije una opcion:\t\t\t||" <<endl;
        cout << "\t|| \t\t\t\t\t\t||" << endl;
        cout << "\t|| ============================================ ||" << endl;
        cout << "\t|| ============================================ ||" << endl;

        cin >> tecla;

        switch(tecla){
            case '1':
		system("cls");
		cout << "| CREAR ARCHIVO\n";
		pausa();
		break;

            case '2':
		system("cls");
		cout << "| ABRIR ARCHIVO\n";
		pausa();
		break;

            case '3':
		system("cls");
		cout << "| ARCHIVOS RECIENTES\n";
		pausa();
		break;

            case '4':
		bandera=true;
		//exit(1);
		break;

            default:
		system("cls");
		cout << "Opcion no valida.\a\n";
		pausa();
		break;
	}
    }while(bandera != true);
}

void Menu::pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getwchar();
    getwchar();
}
