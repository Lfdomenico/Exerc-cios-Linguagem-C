/* 
Luiz Fernando Moreira Dom�nico

1. Fa�a um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for
maior do que R$ 10.000, o programa dever� apresentar a mensagem �voc�
ganha bem!�

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float salario;

    printf("Informe o sal�rio do funcion�rio (R$): ");
    scanf("%f",&salario);

    if(salario > 10000){
        printf("\n");
        printf("Voc� ganha bem!");
    }

    return 0;
}
