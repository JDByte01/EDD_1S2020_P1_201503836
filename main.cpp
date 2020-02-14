/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: JOSED
 *
 * Created on 12 de febrero de 2020, 2:36
 */
/*
#include <iostream>
#include <cstdlib>
#include <curses.h>
#include "Menu.h"

using namespace std;


int main(int argc, char** argv) {
    //Menu m;

   // m.menuHome();
    return 0;
}
*/

#include <curses.h>
 
int main() {
 initscr();
       printw("Hola linux!");
       refresh();
       getch();
       endwin();
       return 0;  
}
 