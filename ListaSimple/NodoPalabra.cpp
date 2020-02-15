//#include <iostream>
#include <string.h>

using namespace std

class NodoPalabra
{
private:
    string palabra;
    string palabra_1;
    string palabra_2;
public:
    NodoPalabra();
    NodoPalabra(string, string);
    ~NodoPalabra();
    string palabraMayus(string);
    string getPalabra(){ return this.palabra; }
    string getPalabra_1(){ return this.palabra_1; }
    string getPalabra_2(){ return this.palabra_2; }
    void setPalabra(string p){ this.palabra = p;}
    void setPalabra_1(string p){ this.palabra_1 = p;}
    void setPalabra_2(string p){ this.palabra_2 = p;}
    string grafo();
};

/* ================================= */

NodoPalabra::NodoPalabra(){
    this.palabra = "";
    this.palabra_1 = "";
    this.palabra_2 = "";
}

NodoPalabra::NodoPalabra(string p1, string p2){
    this.palabra = palabraMayus(p1);
    this.palabra_1 = p1;
    this.palabra_2 = p2;
}

NodoPalabra::~NodoPalabra()
{
}

string NodoPalabra::palabraMayus(string p){
    //Convertir palabra en MAYUSCULAS
    for (int i = 0; i < p.length(); i++) p[i] = toupper(p[i]);
    return p;
}

string NodoPalabra::grafo(){
    return "";
}
