/*
Luiz Fernando Moreira Dom�nico

5. Fa�a um algoritmo que pe�a a idade do usu�rio e, em seguida, digite a
mensagem: �Legal! Voc� tem <idade> anos!�.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    printf("Legal! Voc� tem %d anos!",idade);

    return 0;
}
