/*
Luiz Fernando Moreira Dom�nico

7. Fa�a um algoritmo que pe�a a idade do usu�rio, depois o ano de
nascimento do usu�rio, e apresente a mensagem: �Voc� tem <idade> anos
e nasceu em <ano de nascimento>!�
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int idade, ano_nascimento;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

     printf("Informe seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);

    printf("Voc� tem %i anos e nasceu em %i!", idade, ano_nascimento);



    return 0;
}
