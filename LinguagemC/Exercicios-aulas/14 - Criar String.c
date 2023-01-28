#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    char palavra[10];

    printf("Digite uma palavra: ");

    //Limpa Buffer
    setbuf(stdin, 0);

    //USA APENAS A QUANTIDADE DE LETRAS INFORMADA
    palavra[strlen(palavra)-1] = '\0';

    //LER STRING
    fgets(palavra, 255, stdin);

    printf("%s", palavra);
}
