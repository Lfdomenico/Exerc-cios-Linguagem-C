/*
Luiz Fernando Moreira Dom�nico

4. Fa�a um algoritmo que pe�a o nome do usu�rio e, em seguida, digite a
mensagem: �Seja bem vindo, <nome do usu�rio>.
*/

#include<stdio.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char cat[50];

    printf("Informe seu nome:");
    printf("\n");
    scanf("%s",&nome);

    printf("Informe seu sobrenome:");
    printf("\n");
    scanf("%s",&sobrenome);


    strcat(cat, nome);
    strcat(cat, sobrenome);

    printf("Ol� %s %s", nome, sobrenome);

    return 0;
}
