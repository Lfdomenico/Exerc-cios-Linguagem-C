/*
Luiz Fernando Moreira Dom�nico

6. Fa�a um algoritmo que pe�a o nome do usu�rio, depois a idade do usu�rio
e, em seguida, digite a mensagem: �Legal, <nome do usu�rio>! Voc� tem
<idade> anos!�.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char cat[50];
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", &nome);

    printf("Informe seu nome: ");
    scanf("%s", &sobrenome);

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    strcat(cat, nome);
    strcat(cat, sobrenome);

    printf("Legal %s %s! Voc� tem %i anos de idade!", nome, sobrenome, idade);

    return 0;
}
