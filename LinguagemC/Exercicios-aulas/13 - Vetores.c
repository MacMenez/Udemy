#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

void main(){
    setlocale(LC_ALL,"");

    int vetor[TAM], cont;

    //CONTAGEM DE VETOR SEMPRE COMEÇA EM 0.
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\n Posição 0: %d", vetor[0]);
    printf("\n Posição 1: %d", vetor[1]);
    printf("\n Posição 2: %d", vetor[2]);

    //VETOR EM LAÇO DE REPETIÇÃO
    for(cont = 0; cont < TAM; cont++){
        printf("\n Posição %d : %d", cont, vetor[cont]);
    }

     for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;


    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }
}
