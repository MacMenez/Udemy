#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main(){
    setlocale(LC_ALL,"");

    int vetor[TAM], cont;

    //CONTAGEM DE VETOR SEMPRE COME�A EM 0.
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\n Posi��o 0: %d", vetor[0]);
    printf("\n Posi��o 1: %d", vetor[1]);
    printf("\n Posi��o 2: %d", vetor[2]);

    //VETOR EM LA�O DE REPETI��O
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posi��o %d : %d", cont, vetor[cont]);
    }

     for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;


    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }
}
