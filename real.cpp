#include "real.h"
#include "entero.h"
#include "racional.h"
#include "complejo.h"
#include <cstdlib>
#include <assert.h>

using namespace std;

Real::Real(){
    valor = 0;
}

Real::Real(float v){
    valor = v;
}

Real::~Real(){}

void Real::set_dato(float n){
    valor = n;
}

float Real::get_dato(void){
    return valor;
}


//-----------------------------------------------------------------//
// Cambio de tipos...
//-----------------------------------------------------------------//

//Devuelve una copia del Número actual en el tipo Real
const Real Real::toReal() const
{
    return Real(*this);
}

const Entero Real::toEntero() const
{
    Entero auxiliar(this->valor);
    return auxiliar;
}

const Racional Real::toRacional() const{
    return Racional(valor,1);
}

const Complejo Real::toComplejo() const{
    return Complejo(valor,0);
}

//-----------------------------------------------------------------//
// Sobrecarga de operadores...
//-----------------------------------------------------------------//

Numero& Real::operator+(const Numero &b) const
{
    Real auxiliar = b.toReal();
    return *(new Real(valor+auxiliar.valor));
}

Numero& Real::operator-(const Numero &b) const
{
    Real auxiliar = b.toReal();
    return *(new Real(valor-auxiliar.valor));
}

Numero& Real::operator*(const Numero &b) const
{
    Real auxiliar = b.toReal();
    return *(new Real(valor*auxiliar.valor));
}

Numero& Real::operator/(const Numero &b) const
{
    Real auxiliar = b.toReal();
    try{
        if (auxiliar.valor == 0.0){
            throw 2;
        }
        else{
            return *(new Real(valor/auxiliar.valor));
        }
    }
    catch(int e){
        cout << "División por 0 (Reales). Excepción --> " << e << endl;
        
    }
}

//-----------------------------------------------------------------//
// Flujo de entrada y salida...
//-----------------------------------------------------------------//

ostream& Real::toStream(ostream& sout) const
{
    sout << this->valor;
    return sout;
}

istream& Real::fromStream(istream& sin)
{
    float auxiliar;
    sin >> auxiliar;
    set_dato(auxiliar);
    return sin;
}