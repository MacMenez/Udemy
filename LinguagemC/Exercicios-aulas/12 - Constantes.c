#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10 //NÃO IRÁ MUDAR EM MOMENTO NENHUM. A VARIAVEL NAO PODE MUDAR.

void main(){
    setlocale(LC_ALL,"");

    printf("%d", TAM);

    //CONTAR ATÉ 10
    int cont;
    for(cont = 1; cont <= TAM; cont++){
        printf("\n %d", cont);
    }
}
