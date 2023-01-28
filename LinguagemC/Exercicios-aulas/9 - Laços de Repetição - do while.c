#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 1, b = 10;

    //Contando até 10
    //Só executa se for verdadeira a condição
    while(a <= 10){
        printf("\n %d", a);

        //OPERAÇÃO DE INCREMENTO
        a ++; //a = a + 1;
    }

    //Contando até 10
     //Executa uma vez e depois confere
    a = 1;

    do{
        printf("\n %d", a);

        //OPERAÇÃO DE INCREMENTO
        a ++; //a = a + 1;
    }while(a <= 10);
}
