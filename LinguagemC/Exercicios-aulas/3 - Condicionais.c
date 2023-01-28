#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';

    //CONDICIONAL SIMPLES
    // = significa atribuição
    // = = significa comparação
    if (a == 5){
        printf("A variável a = 5");
    }

    if (b == 2.5){
        printf("\n A variável b = 2.5");
    }

    if (c == 'x'){
        printf("\n A variável c = letra x");
    }

    //CONDICIONAL COMPOSTA
    //PAA OU ÍMPAR
    if (a % 2 == 1){
        printf("\n A variável a é ímpar!");
    } else{
        printf("\n A variável a é par!");
    }

    if (opcao == 1){
        printf("\n A opção é = 1");
    } else if(opcao == 2){
        printf("\n A opção é = 2");
    }else{
        printf("\n A opção não é 1 nem 2.");
    }
}
