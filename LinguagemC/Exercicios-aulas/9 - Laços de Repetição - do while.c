#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 1, b = 10;

    //Contando at� 10
    //S� executa se for verdadeira a condi��o
    while(a <= 10){
        printf("\n %d", a);

        //OPERA��O DE INCREMENTO
        a ++; //a = a + 1;
    }

    //Contando at� 10
     //Executa uma vez e depois confere
    a = 1;

    do{
        printf("\n %d", a);

        //OPERA��O DE INCREMENTO
        a ++; //a = a + 1;
    }while(a <= 10);
}
