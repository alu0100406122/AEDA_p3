#ifndef _RACIONAL_H
#define _RACIONAL_H

#include <iostream>
#include "numero.h"

using namespace std;


class Racional: public Numero{
    
    private:
        int num;
        int den;
        
    public:
        Racional();
        Racional(int x, int y);
        ~Racional();
        
        const Racional toRacional() const;
        const Complejo toComplejo() const;
        const Real toReal() const;
        const Entero toEntero() const;
        
        Numero& operator+(const Numero &b) const;
        Numero& operator-(const Numero &b) const;
        Numero& operator/(const Numero &b) const;
        Numero& operator*(const Numero &b) const;
        
        ostream& toStream(ostream& sout) const;
        istream& fromStream(istream& sin);
};

#endif