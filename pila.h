
#ifndef _PILA_H
#define _PILA_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "lista.h"

using namespace std; 

//typedef int TDATO;

template<class TDATO>
class stack_t { 
    private: 
        lista_t<TDATO> lista_; 
    public: 
        stack_t(void);
        ~stack_t (void);
        bool empty (void);
        void push (TDATO dato);
        TDATO pop (void);
        TDATO top(void);
        void rellenar(void);
        void write(void);
};

template<class TDATO>
stack_t<TDATO>::stack_t(void):
    lista_(){}

template<class TDATO>
stack_t<TDATO>::~stack_t (void){}

template<class TDATO>
bool stack_t<TDATO>::empty (void){
    return lista_.get_inicio() == NULL;
}

template<class TDATO>
void stack_t<TDATO>::push(TDATO dato){
    nodo_t<TDATO>* aux = new nodo_t<TDATO>(dato);
    lista_.insertar_final(aux);
}

template<class TDATO>
TDATO stack_t<TDATO>::pop(void){
    nodo_t<TDATO>* aux = lista_.extraer_final();
    TDATO dato = aux->get_dato();
    delete aux;
    return dato;
} 

template<class TDATO>
TDATO stack_t<TDATO>::top(void){
    TDATO dato=lista_.get_inicio()->get_dato();
    return dato;
}

template<class TDATO>
void stack_t<TDATO>::rellenar(void){
    lista_.rellenar();
}

template<class TDATO>
void stack_t<TDATO>::write(void){
    lista_.write();
}



#endif