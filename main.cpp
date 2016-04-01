#include "numero.h"
#include "entero.h"
#include "real.h"
#include "racional.h"
#include "complejo.h"
#include <iostream>

using namespace std;

int main () {
    Numero* n1 = new Entero(1);
    Numero* n2 = new Entero(0);
    Numero* n3 = new Entero(4);
    Numero* n4 = new Racional(4,2);
    Numero* n5 = new Racional(1,6);
    Numero* n6 = new Complejo(1,2);
    Numero* n7 = new Complejo(2,2);
    Numero* n8 = new Real(1.1);
    Numero* n9 = new Real(4.2);
    cout << "--------------------------------------------" << endl;
    cout << "               Numeros Enteros              " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Prueba: División por 0. Excepción." << endl;
    cout << "Dividiendo: (1 / 0)..." << endl;
    (*n1 / *n2);
    cout << endl;
    cout << "Prueba: Operacion Suma." << endl;
    cout << "Suma (Entero + Real) (4 + 1.1) = " << (*n3 + *n8) << endl;
    cout << endl;
    cout << "Prueba: Operacion Resta." << endl;
    cout << "Resta (Entero - Complejo) (4 - 1+2i) = " << (*n3 - *n6) << endl;
    cout << endl;
    cout << "Prueba: Operacion Multiplicación." << endl;
    cout << "Multiplicación (Entero * Racional) (4 * 4/2) = " << (*n3 * *n4) << endl;
    cout << endl;
    cout << "Prueba: Operación División. " << endl;
    cout << "División (Entero / Real) (4 / 1.1) = " << (*n3 / *n8);
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "              Numeros Racionales            " << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Prueba: Operacion Suma." << endl;
    cout << "Suma (Racional + Real) (4/2 + 1.1) = " << (*n4 + *n8) << endl;
    cout << endl;
    cout << "Prueba: Operacion Resta." << endl;
    cout << "Resta (Racional - Complejo) (4/2 - 1+2i) = " << (*n4 - *n6) << endl;
    cout << endl;
    cout << "Prueba: Operacion Multiplicación." << endl;
    cout << "Multiplicación (Racional * Racional) (4/2 * 4/2) = " << (*n4 * *n4) << endl;
    cout << endl;
    cout << "Prueba: Operación División. " << endl;
    cout << "División (Racional / Real) (4/2 / 1.1) = " << (*n4 / *n8);
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "               Numeros Reales               " << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Prueba: División por 0. Excepción." << endl;
    cout << "Dividiendo: (4.2 / 0)..." << endl;
    (*n9 / *n2);
    cout << endl;
    cout << "Prueba: Operacion Suma." << endl;
    cout << "Suma (Real + Entero) (4.2 + 4) = " << (*n9 + *n3) << endl;
    cout << endl;
    cout << "Prueba: Operacion Resta." << endl;
    cout << "Resta (Real - Complejo) (4.2 - 1+2i) = " << (*n9 - *n6) << endl;
    cout << endl;
    cout << "Prueba: Operacion Multiplicación." << endl;
    cout << "Multiplicación (Real * Racional) (4.2 * 4/2) = " << (*n9 * *n4) << endl;
    cout << endl;
    cout << "Prueba: Operación División. " << endl;
    cout << "División (Real / Real) (4.2 / 1.1) = " << (*n9 / *n8);
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "             Numeros Complejos              " << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Prueba: Operacion Suma." << endl;
    cout << "Suma (Complejo + Complejo) (1+2i + 2+2i) = " << (*n6 + *n7) << endl;
    cout << endl;
    cout << "Prueba: Operacion Resta." << endl;
    cout << "Resta (Complejo - Entero) (1+2i - 1) = " << (*n6 - *n1) << endl;
    cout << endl;
    cout << "Prueba: Operacion Multiplicación." << endl;
    cout << "Multiplicación (Complejo * Racional) (1+2i * 4/2) = " << (*n6 * *n4) << endl;
    cout << endl;
    return 0;
}
