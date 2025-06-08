/*
Luiz Fernando Moreira Dom�nico

9. Em uma ind�stria de parafusos, um algoritmo determina se a produ��o
est� boa ou ruim. Uma produ��o � ruim quando o n�mero de parafusos
com defeito for maior do que 10% do total produzido. Fa�a um algoritmo
que pe�a o n�mero total de parafusos produzidos e, em seguida, pe�a o
n�mero de parafusos com defeito. O algoritmo, ent�o, deve calcular o limite
de pe�as com defeito permitidas (com base no total de pe�as produzidas e
a porcentagem limite) e apresentar se a produ��o est� boa ou ruim.
 
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int total, defeituosos, limite;

    printf("Informe o n�mero total de parafusos produzidos: ");
    scanf("%d", &total);

    printf("Informe o n�mero de parafusos defeituosos: ");
    scanf("%d",&defeituosos);


    limite = total * 0.10;

    if(limite > defeituosos){
        printf("A produ��o est� boa.");
    }else{
        printf("A produ��o est� ruim.");
       }

    return 0;
}
