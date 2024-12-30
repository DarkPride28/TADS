/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: ISA
 *
 * Created on December 28, 2024, 3:48 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "ListaDoblementeEnlazadaGenerica.h"
/*
 * 
 */
int main(int argc, char** argv) {
    void *L1 = NULL;
    L1 = crearListaDoble();
    int esVacia = esListaDobleVacia(L1);
    printf(" %d \n",esVacia);
    return 0;
}

