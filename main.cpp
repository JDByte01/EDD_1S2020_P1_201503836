/* 
 * File:   main.cpp
 * Author: JOSED
 * Compilar:    cc -o [nombre] [nombre.cpp] -lncurses
 *              ./[nombre]
 *
 * Created on 12 de febrero de 2020, 2:36
 */

#include <ncurses.h>
#include "Menu.h"

int main() {
    Menu m;
    initscr();
    m.menuHome();
    return 0;  
}
 