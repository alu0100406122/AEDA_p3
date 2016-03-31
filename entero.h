#ifndef _ENTERO_H
#define _ENTERO_H

#pragma once
#include "numero.h"
#include "real.h"
#include <iostream>

using namespace std;

class Real;
class Racional;

class Entero: public Numero
{
    int valor;

    public:
        Entero();
        Entero(int v);
        ~Entero();
    
        void set_dato(int n);
        int get_dato(void);
    
        const Entero toEntero() const;
        const Real toReal() const;
        const Racional toRacional() const;
        const Complejo toComplejo() const;
    
        //Escribe una Numero al flujo sout
        ostream& toStream(ostream& sout) const;
        //Lee un Numero desde flujo sin
        istream& fromStream(istream& sin);
    
        //Operadores
        Numero& operator+(const Numero &b) const;
        Numero& operator-(const Numero &b) const;
        Numero& operator/(const Numero &b) const;
        Numero& operator*(const Numero &b) const;
};

#endif
