/*
Luiz Fernando Moreira Dom�nico

8. Fa�a um algoritmo que pe�a o ano de nascimento do usu�rio e apresente
sua prov�vel idade.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int ano_nascimento;

    printf("Informe seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);

    int idade = 2025 - ano_nascimento;

    printf("Quer dizer que voc�, provavelmente, tem %d anos de idade.",idade);

    return 0;
}
