#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';

    //CONDICIONAL SIMPLES
    // = significa atribui��o
    // = = significa compara��o
    if (a == 5){
        printf("A vari�vel a = 5");
    }

    if (b == 2.5){
        printf("\n A vari�vel b = 2.5");
    }

    if (c == 'x'){
        printf("\n A vari�vel c = letra x");
    }

    //CONDICIONAL COMPOSTA
    //PAA OU �MPAR
    if (a % 2 == 1){
        printf("\n A vari�vel a � �mpar!");
    } else{
        printf("\n A vari�vel a � par!");
    }

    if (opcao == 1){
        printf("\n A op��o � = 1");
    } else if(opcao == 2){
        printf("\n A op��o � = 2");
    }else{
        printf("\n A op��o n�o � 1 nem 2.");
    }
}
