#include <stdio.h> //Bibliotecas Padr�es
#include <stdlib.h> //Bibliotecas Padr�es
#include <locale.h> //Insere acentos

void main(){
    setlocale(LC_ALL,""); //Fun��o que permite usar acentos

    printf("Ol� Mundo! \n");

    //Definindo escrita
    //Escreve textos comuns.
    //print("");

    //Escreve vari�veis
    // printf("%d", a);
    //%d � para n�mero inteiros. O a � a variavel desejada.

    int a = 50;
    //int b = 6;
    //printf("%d", a);
    //printf("%d", b);
    //printf("%d", a + b);
    printf("O valor de a � = %d \n", a); //\n pula linhas. Ele deve ser escrito dentro das aspas ("")

    //LER VALORES
    scanf("%d", &a);//& significa endere�o na memoria do computador.
    printf("\n O valor de a modou para %d", a);

    //LER VALORES REAIS
    float b = 5.5; //float = real. Numeros quebrados.
    printf("O valor de b � = %f \n", b); //%f � para numeros quebrados.
    scanf("%f", &b);
    printf("\n O valor de b modou para %f", b);

    //LENDO LETRAS
    //Sempre que ler um valor em char, limpe o buffer(compilador que armazena dados) para evitar erros.
    char letra = 't'; //toda variavel escrita deve ser declarada entre aspas simples.
    printf("\n O valor de c � = %c \n", letra); //%f � para numeros quebrados.
    fflush(stdin);//Limpa a entrada principal
    scanf("%c", &letra);
    printf("\n O valor de c modou para %c", letra);
}
