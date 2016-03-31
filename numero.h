#ifndef _NUMERO_H
#define _NUMERO_H

#pragma once
#include <iostream>

using namespace std;

class Entero;
class Real;
class Racional;
class Complejo;

class Numero{
    friend ostream& operator << (ostream& sout, const Numero& n);
    friend istream& operator >> (istream& sin, Numero& n);
    
    public:

        virtual const Entero toEntero() const = 0;
        virtual const Real toReal() const = 0;
        virtual const Racional toRacional() const =0;
        virtual const Complejo toComplejo() const=0;    
    
        virtual Numero& operator+(const Numero &b) const = 0;
        virtual Numero& operator-(const Numero &b) const = 0;
        virtual Numero& operator/(const Numero &b) const = 0;
        virtual Numero& operator*(const Numero &b) const = 0;
    
        //Escribe una Numero al flujo sout
        virtual ostream& toStream(ostream& sout) const = 0;
        //Lee un Numero desde flujo sin
        virtual istream& fromStream(istream& sin) = 0;
};

#endif
