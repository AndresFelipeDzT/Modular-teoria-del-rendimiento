//Las librerias pertinentes
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "modulo.h"   // para incluir los prototipos

// Variables globales
struct timeval ini, fin;

void InicioMuestra(){
    gettimeofday(&ini, (void *)0);
}

void FinMuestra(){
    gettimeofday(&fin, (void *)0);
    fin.tv_usec -= ini.tv_usec;
    fin.tv_sec -= ini.tv_sec;
    double tiempo = (double) (fin.tv_sec*1000000 + fin.tv_usec);
    printf("%9.0f \n", tiempo);
}

void iniMatriz(int n, double *m1, double *m2){
    for(int i=0; i<n*n; i++){
        m1[i] = i*2.3 + 1.3;
        m2[i] = i*2.3;
    }
}

void imprMatrices(int n, double *matriz){
    if(n<9){
        printf("\n#######################################################\n");
        for(int i=0; i<n*n; i++){
            if(i%n==0) printf("\n");
            printf(" %f ", matriz[i]);
        }
    } else {
        printf("\n#######################################################\n");
    }
}
