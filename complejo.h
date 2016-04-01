#ifndef _COMPLEJO_H
#define _COMPLEJO_H

#include <iostream>
#include "numero.h"

using namespace std;

class Complejo: public Numero{
    
    private:
        float real;
        float imag;
        
    public:
        //Constructor y destructor.
        Complejo();
        Complejo(float re, float im);
        ~Complejo();
        
        //Devuelve una copia del numero actual en el tipo Complejo.
        const Complejo toComplejo() const;
        
        //Devuelve una copia del numero actual en el tipo Racional.
        const Racional toRacional() const;
        
        //Devuelve una copia del numero actual en el tipo Real.
        const Real toReal() const;
        
        //Devuelve una copia del numero actual en el tipo Complejo.
        const Entero toEntero() const;
        
        //Sobrecarga de operadores.
        Numero& operator+(const Numero &b) const;
        Numero& operator-(const Numero &b) const;
        Numero& operator/(const Numero &b) const;
        Numero& operator*(const Numero &b) const;
        
        //Escribe un numero al flujo.
        ostream& toStream(ostream& sout) const;
        
        //Lee un numero desde flujo
        istream& fromStream(istream& sin);
};

#endif
    