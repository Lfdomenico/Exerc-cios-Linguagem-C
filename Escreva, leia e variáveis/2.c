/*
Luiz Fernando Moreira Dom�nico

2. Fa�a um algoritmo que concatene as seguintes mensagens em uma s�:
 o �Eu estou �
 o �Fazendo �
 o �concatena��o!�
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");

    char str1[15];
    char str2[15];
    char str3[15];
    char cat[45];

    strcpy(str1, "Eu estou "); // armazena a string na vari�vel
    strcpy(str2, "fazendo ");
    strcpy(str3, "concatena��o!");


    strcat(cat, str1); // concatena valores em cat
    strcat(cat, str2);
    strcat(cat, str3);

    puts(cat);

    return 0;
}
