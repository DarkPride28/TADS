/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaDoblementeEnlazadaGenerica.h
 * Author: ISA
 *
 * Created on December 28, 2024, 3:56 PM
 */

#ifndef LISTADOBLEMENTEENLAZADAGENERICA_H
#define LISTADOBLEMENTEENLAZADAGENERICA_H

/*
 * Considerar la lista generica a realizar se realizara con punteros genericos
 * 0 anterior 1 dato 1 siguiente para nodo
 */
void *crearListaDoble();
int esListaDobleVacia(void*);
int destruirListaDoble(void**);

#endif /* LISTADOBLEMENTEENLAZADAGENERICA_H */
