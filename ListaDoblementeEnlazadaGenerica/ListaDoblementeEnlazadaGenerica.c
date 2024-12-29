/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaDoblementeEnlazadaGenerica.c
 * Author: ISA
 * 
 * Created on December 28, 2024, 3:56 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include "ListaDoblementeEnlazadaGenerica.h"

enum LISTA_DOBLE{CABEZA,CANTIDAD,COLA};
enum NODO_LISTA_DOBLE{ANTERIOR,DATO,SIGUIENTE};

void *crearListaDoble(){
    void **gestor = malloc(3 * sizeof(void*));
    gestor[CABEZA] = NULL;
    gestor[CANTIDAD] = malloc(sizeof(int));
    gestor[COLA] = NULL;
    int *cantidad = (int*)gestor[CANTIDAD];
    *cantidad = 0;
    return gestor;
}

int esListaDobleVacia(void* lista){
    int resultado = -1;
    if(lista){
        void **gestor = (void**)lista;
        int *cantidad = (int*)gestor[CANTIDAD];
        resultado = !(*cantidad || 0);
    }
    return resultado;
}

int destruirListaDoble(void** lista){
    void **gestor = (void**)lista;
    int resultado = -1; //returna -1 si el gestor es null
    if(gestor){
        
    }
    
    return resultado;
}
