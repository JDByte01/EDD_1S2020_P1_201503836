#ifndef NODOLOG_H
#define NODOLOG_H

class NodoLog
{
    public:
        NodoLog();
        virtual ~NodoLog();

        void setPalabraB(string p){ this->palabraB = p; }
        void setPalabraR(string p){ this->palabraR = p;}
        void setEstado(string e){ this->estado = e; }
        void setPalabra(string p){ this->palabra = p; }
        void setPosicion(int p){ this->posicion = p;}
        void setSiguiente(NodoLog* n){ this->siguiente = n; }
        string getPalabraB(){ return this->palabraB; }
        string getPalabraR(){ return this->palabraR; }
        string getEstado(){ return this->estado; }
        string getPalabra(){ return this->palabra; }
        int getPosicion(){ return this->posicion; }
        NodoLog* getSiguiente(){ return this->siguiente; }
        void imprimir();
        string graphviz();


    protected:

    private:
        string palabraB;
        string palabraR;
        string estado;
        string palabra;
        int posicion;
        NodoLog* siguiente;
};

#endif // NODOLOG_H
