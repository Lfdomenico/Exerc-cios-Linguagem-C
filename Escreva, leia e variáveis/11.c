/*
Luiz Fernando Moreira Dom�nico

11. Fa�a um algoritmo que pe�a uma temperatura em graus farenheits e
apresente seu respectivo valor em celsius. O c�lculo de convers�o �: C=
5*(F-32)/9.
*/
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float temp_farenheit;

    printf("Informe uma temperatura em �F: ");
    scanf("%f",&temp_farenheit);

    float temp_celsius = (5*(temp_farenheit-32))/9;

    printf("Ap�s a convers�o, a temperatura em �C �: %.2f",temp_celsius);


    return 0;
}
