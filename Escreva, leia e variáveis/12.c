/*
Luiz Fernando Moreira Dom�nico

12. Fa�a um algoritmo que pe�a um valor inteiro (e o armazene em uma
vari�vel de nome a). Pe�a um segundo valor inteiro (e o armazene em uma
vari�vel de nome b). E, troque o valor da vari�vel a por b e vice-versa. Por
exemplo, se o usu�rio digitar primeiro 2, depois 6 (a=2 e b=6), no fim do
algoritmo, o valor de a dever� ser 6 e o de b dever� ser 2. Por fim, apresentar
os resultados para o usu�rio.
*/

#include<stdio.h>

int main(){

    int a, b, auxiliar;

    printf("Informe o primeiro valor (a): ");
    scanf("%i",&a);
    printf("Informe o segundo valor (b): ");
    scanf("%i",&b);

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Valores alterados\n");
    printf("a -> %i   b -> %i", a,b);

    return 0;
}
