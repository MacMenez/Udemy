#include <stdio.h> //Bibliotecas Padrões
#include <stdlib.h> //Bibliotecas Padrões
#include <locale.h> //Insere acentos

void main(){
    setlocale(LC_ALL,""); //Função que permite usar acentos

    printf("Olá Mundo! \n");

    //Definindo escrita
    //Escreve textos comuns.
    //print("");

    //Escreve variáveis
    // printf("%d", a);
    //%d é para número inteiros. O a é a variavel desejada.

    int a = 50;
    //int b = 6;
    //printf("%d", a);
    //printf("%d", b);
    //printf("%d", a + b);
    printf("O valor de a é = %d \n", a); //\n pula linhas. Ele deve ser escrito dentro das aspas ("")

    //LER VALORES
    scanf("%d", &a);//& significa endereço na memoria do computador.
    printf("\n O valor de a modou para %d", a);

    //LER VALORES REAIS
    float b = 5.5; //float = real. Numeros quebrados.
    printf("O valor de b é = %f \n", b); //%f é para numeros quebrados.
    scanf("%f", &b);
    printf("\n O valor de b modou para %f", b);

    //LENDO LETRAS
    //Sempre que ler um valor em char, limpe o buffer(compilador que armazena dados) para evitar erros.
    char letra = 't'; //toda variavel escrita deve ser declarada entre aspas simples.
    printf("\n O valor de c é = %c \n", letra); //%f é para numeros quebrados.
    fflush(stdin);//Limpa a entrada principal
    scanf("%c", &letra);
    printf("\n O valor de c modou para %c", letra);
}
