#include "entero.h"
#include "racional.h"
#include "real.h"
#include "complejo.h"
#include <iostream>


using namespace std;

Entero::Entero(){
    valor = 0;
}

Entero::Entero(int v){
    valor = v;
}

Entero::~Entero(){}

void Entero::set_dato(int n){
    valor = n;
}

int Entero::get_dato(void){
    return valor;
}

//-----------------------------------------------------------------//
// Cambio de tipos...
//-----------------------------------------------------------------//

//Devuelve una copia del Número actual en el tipo Entero
const Entero Entero::toEntero() const{
    return Entero(*this);
}

const Real Entero::toReal() const{
    Real auxiliar(this->valor);
    return auxiliar;
}

const Racional Entero::toRacional() const{
    return Racional(valor,1);
}

const Complejo Entero::toComplejo() const{
    return Complejo(valor,0);
}

//-----------------------------------------------------------------//
// Sobrecarga de operadores...
//-----------------------------------------------------------------//

Numero& Entero::operator+(const Numero &b) const{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor+auxiliar.valor));
}

Numero& Entero::operator-(const Numero &b) const{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor-auxiliar.valor));
}

Numero& Entero::operator*(const Numero &b) const{
    Entero auxiliar = b.toEntero();
    return *(new Entero(valor*auxiliar.valor));
}

Numero& Entero::operator/(const Numero &b) const{
    Entero auxiliar = b.toEntero();
    try{
        if (auxiliar.valor == 0){
            throw 1;
        }
        else{
            return *(new Entero(valor/auxiliar.valor));
        }
    }
    catch(int e){
        cout << "Mensaje de error: División por 0 (Enteros). Excepción --> " << e << endl;
        
    }
    
}

//-----------------------------------------------------------------//
// Flujo de entrada y salida...
//-----------------------------------------------------------------//

//Escribe una Numero al flujo sout
ostream& Entero::toStream(ostream& sout) const{
    sout << this->valor;
    return sout;
}

//Lee un Numero desde flujo sin
istream& Entero::fromStream(istream& sin){
    int auxiliar;
    sin >> auxiliar;
    set_dato(auxiliar);
    return sin;
}
