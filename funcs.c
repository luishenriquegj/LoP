#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "definitions.h"
#include <windows.h>


void montacontorno(parametros* Parametro, Dado *dado){

    int altlimite = &Parametro->alturamax;
    int aux =0 ;
    int pontomedio = 0;
    int i = 0;
    for(i=0;i<2;i++){
        dado->alturas[aux] = rand()% altlimite;
        aux = 129;
    }
    for(i=0;i<129;i++){
        pontomedio = (i + aux)/2;
        dado->alturas[pontomedio] = (dado->alturas[aux] + dado->alturas[i])/2 + rand() %altlimite ;
        while(dado->alturas[aux] > Parametro->alturamax){
              dado->alturas[pontomedio] = (dado->alturas[aux] + dado->alturas[i])/2 - rand() % altlimite;
            }
        aux -= 1;

    }

}
