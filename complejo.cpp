#include <iostream>
#include "racional.h"
#include "real.h"
#include "entero.h"
#include "complejo.h"

using namespace std;

Complejo::Complejo(){
    real = 0.0;
    imag = 0.0;
}

Complejo::Complejo(float re, float im){
    real = re;
    imag = im;
}

Complejo::~Complejo(){}

//-----------------------------------------------------------------//
// Cambio de tipos...
//-----------------------------------------------------------------//

//Devuelve una copia del numero actual en el tipo Complejo.
const Complejo Complejo::toComplejo() const{
    return Complejo(*this);
}

//Devuelve una copia del numero actual en el tipo Racional.
const Racional Complejo::toRacional() const{
    return Racional(real,1);
}

//Devuelve una copia del numero actual en el tipo Real.
const Real Complejo::toReal() const{
    return Real(real);
}

//Devuelve una copia del numero actual en el tipo Complejo.
const Entero Complejo::toEntero() const{
    try{
        throw 3;
        return Entero(real);
    }
    catch(int e){
        cout << "Mensaje de error: Se perderá precisión al transformar a Entero el número Complejo. "<< endl;
    }
    
}

//-----------------------------------------------------------------//
// Sobrecarga de operadores...
//-----------------------------------------------------------------//

Numero& Complejo::operator+(const Numero &b) const{
    Complejo aux = b.toComplejo();
    return *(new Complejo(real + aux.real, imag + aux.imag));
}

Numero& Complejo::operator-(const Numero &b) const{
    Complejo aux = b.toComplejo();
    return *(new Complejo(real - aux.real, imag - aux.imag));
}

Numero& Complejo::operator/(const Numero &b) const{
    Complejo aux = b.toComplejo();
    return *(new Complejo(real / aux.real, imag / aux.imag));
}

Numero& Complejo::operator*(const Numero &b) const{
    Complejo aux = b.toComplejo();
    return *(new Complejo(real * aux.real - imag * aux.imag, real * aux.imag + imag * aux.real));
}

//-----------------------------------------------------------------//
// Flujo de entrada y salida...
//-----------------------------------------------------------------//

//Escribe un numero al flujo.
ostream& Complejo::toStream(ostream& sout) const{
    sout << real;
    sout << " + ";
    sout << imag;
    sout << "i";
    return sout;
}

//Lee un numero desde flujo
istream& Complejo::fromStream(istream& sin){
    sin >> real;
    sin >> operador;
    sin >> imag;
    
    return sin;
}