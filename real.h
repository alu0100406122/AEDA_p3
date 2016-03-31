#ifndef _REAL_H
#define _REAL_H

#pragma once
#include "numero.h"
#include <iostream>

using namespace std;

class Real: public Numero{

    float valor;
    
    public:
        Real();
        Real(float v);
        ~Real();
    
        void set_dato(float n);
        float get_dato(void);
       
        const Entero toEntero() const;
        const Real toReal() const;
        const Racional toRacional() const;
        const Complejo toComplejo() const;
        
        ostream& toStream(ostream& sout) const;
        istream& fromStream(istream& sin);
        
        Numero& operator+(const Numero &b) const;
        Numero& operator-(const Numero &b) const;
        Numero& operator/(const Numero &b) const;
        Numero& operator*(const Numero &b) const;
};

#endif