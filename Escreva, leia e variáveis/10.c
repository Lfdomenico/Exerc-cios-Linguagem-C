/*
Luiz Fernando Moreira Dom�nico

10. Fa�a um algoritmo que pe�a uma temperatura em graus c�lsius e apresente
seu respectivo valor em farenheits. O c�lculo de convers�o �: F= (9*C/5) +
32.
*/
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float temp_celsius;

    printf("Informe uma temperatura em �C: ");
    scanf("%f",&temp_celsius);

    float temp_farenheit = ((9*temp_celsius)/5) + 32;

    printf("\n");
    printf("Ap�s a convers�o, a temperatura em �F �: %.2f",temp_farenheit);

    return 0;
}
