#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "definitions.h"
#include <windows.h>


void montacontorno(parametros* Parametro, Dado *dado){


    int aux = 0 ,aux2 = 0 ;
    int pontomedio = 0,pontomedioaux=0;
    int i = 0,j = 0;
    for(i=0;i<17;i++){
        dado->alturas[i] = 0;
        aux2++;
    }
    for(i=0;i<2;i++){
        dado->alturas[aux] = rand()% Parametro->alturamax;
        aux = 17;
    }
        pontomedio = (i + aux)/2;
        pontomedioaux = pontomedio;
        dado->alturas[pontomedio] = (dado->alturas[aux] + dado->alturas[aux2])/2 + rand() %Parametro->alturamax ;
        while(dado->alturas[pontomedio] > Parametro->alturamax){
              dado->alturas[pontomedio] -= rand() % Parametro->alturamax;
            }
    for(i=1;j<=pontomedio;i++){
        dado->alturas[pontomedioaux] = (dado->alturas[i]  + dado->alturas[pontomedioaux])/2 + rand() % Parametro->alturamax;
        while(dado->alturas[pontomedioaux] > Parametro->alturamax){
              dado->alturas[pontomedioaux] -= rand() % Parametro->alturamax;
            }

        pontomedioaux -= 1;
        if(pontomedioaux==2){
            break;
        }

    }
    pontomedioaux=pontomedio;
    for(i=pontomedio;i<=aux2;i++){
            dado->alturas[i] = (dado->alturas[i] + dado->alturas[aux2]/2) + rand() %Parametro->alturamax;
            while(dado->alturas[i]>Parametro->alturamax){
                dado->alturas[i] -= rand() %Parametro->alturamax;
            }

    }

}
