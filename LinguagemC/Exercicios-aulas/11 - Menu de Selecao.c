#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //MENU SIMPLES
    int opcao;
    //LOOP
    while(opcao < 1 || opcao > 5){
       //MENU 1
        printf("Escolha uma op��o:");
        printf("\n 1 - Op��o 1");
        printf("\n 2 - Op��o 2");
        printf("\n 3 - Op��o 3");
        printf("\n 4 - Op��o 4");
        printf("\n 5 - Op��o 5 \n\n");

        scanf("\n %d", &opcao);

        switch(opcao){
            case 1:
                printf("\n Escolheu op��o 1");
            break;
            case 2:
                printf("\n Escolheu op��o 2");
            break;
            case 3:
                printf("\n Escolheu op��o 3");
            break;
            case 4:
                printf("\n Escolheu op��o 4");
            break;
            case 5:
                printf("\n Escolheu op��o 5");
            break;
            default:
                printf("\n Op��o invalida");
            break;
        }
    }


}
