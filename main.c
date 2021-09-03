#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "definitions.h"
#include "funcs.h"
#include <windows.h>





void main(){
    int i = 0;
    srand(7);
    Dado dado;
    parametros Parametro;
    printf("inisira a altura maxima:");
    scanf("%d",Parametro.alturamax);
    montacontorno(&Parametro.alturamax,&dado.alturas);
    for(i = 0;i<129;i++){
        printf("%d ",dado.alturas[i]);

    }


}

