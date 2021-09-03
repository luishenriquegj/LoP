#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "definitions.h"
#include "funcs.h"
#include <windows.h>
#include <time.h>




void main(){
    int i = 0;
    srand(NULL);
    Dado dado;
    parametros Parametro;
    printf("inisira a altura maxima:");
    scanf("%d",&Parametro.alturamax);
    montacontorno(&Parametro.alturamax,&dado.alturas);
    for(i=0;i<=17;i++){
            printf("%d\n",dado.alturas[i]);
    }



}

