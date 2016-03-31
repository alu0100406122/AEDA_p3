
#include <iostream>
#include "racional.h"
#include "real.h"
#include "entero.h"
#include "complejo.h"

using namespace std;

Racional::Racional(){
    num=0;
    den=0;
}

Racional::Racional(int x, int y){
    num = x;
    den = y;
}

Racional::~Racional(){}

//-----------------------------------------------------------------//
// Cambio de tipos...
//-----------------------------------------------------------------//

//Devuelve una copia del numero actual en el tipo Racional.
const Racional Racional::toRacional()const{
    return Racional(*this);
}


//Devuelve una copia del numero actual en el tipo Racional.
const Complejo Racional::toComplejo() const{
    float aux = (num/den);
    return Complejo(aux,0);
}

//Devuelve una copia del numero actual en el tipo Real.
const Real Racional::toReal() const{
    return Real(num/den);
}

//Devuelve una copia del numero actual en el tipo Racional.
const Entero Racional::toEntero() const{
    return Entero(num/den);
}

//-----------------------------------------------------------------//
// Sobrecarga de operadores...
//-----------------------------------------------------------------//

Numero& Racional::operator+(const Numero &b) const{
    Racional aux = b.toRacional();
    return *(new Racional(num * aux.den + aux.num * den, den * aux.den));
}

Numero& Racional::operator-(const Numero &b) const{
    Racional aux = b.toRacional();
    return *(new Racional(num * aux.den - aux.num * den, den * aux.den));
}

Numero& Racional::operator/(const Numero &b) const{
    Racional aux = b.toRacional();
    return *(new Racional (num*aux.den, den*aux.num));
}

Numero& Racional::operator*(const Numero &b) const{
    Racional aux = b.toRacional();
    return *(new Racional (num*aux.num, den*aux.den));
}

//-----------------------------------------------------------------//
// Flujo de entrada y salida...
//-----------------------------------------------------------------//

ostream& Racional::toStream(ostream& sout) const{
    sout << num << "/" << den;
    return sout;
}

istream& Racional::fromStream(istream& sin){
    char barra;
    sin >> num;
    sin >> barra;
    sin >> den;
    return sin;
}