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
        printf("Escolha uma opção:");
        printf("\n 1 - Opção 1");
        printf("\n 2 - Opção 2");
        printf("\n 3 - Opção 3");
        printf("\n 4 - Opção 4");
        printf("\n 5 - Opção 5 \n\n");

        scanf("\n %d", &opcao);

        switch(opcao){
            case 1:
                printf("\n Escolheu opção 1");
            break;
            case 2:
                printf("\n Escolheu opção 2");
            break;
            case 3:
                printf("\n Escolheu opção 3");
            break;
            case 4:
                printf("\n Escolheu opção 4");
            break;
            case 5:
                printf("\n Escolheu opção 5");
            break;
            default:
                printf("\n Opção invalida");
            break;
        }
    }


}
