/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Menu.h
 * Author: JOSED
 *
 * Created on 12 de febrero de 2020, 2:38
 */

#ifndef MENU_H
#define MENU_H

class Menu {
public:
    Menu();
    Menu(const Menu& orig);
    virtual ~Menu();
    
    void menuHome();
    void pausa();

    bool bandera;
    char tecla;
private:

};

#endif /* MENU_H */

