/* 
Luiz Fernando Moreira Dom�nico

2. Fa�a um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for
menor do que R$ 1.045, o algoritmo deve apresentar a mensagem �voc�
ganha menos do que um sal�rio m�nimo�. Do contr�rio, o algoritmo deve
apresentar a mensagem �voc� ganha pelo menos um sal�rio m�nimo".accumulate

*/
 
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float salario;

    printf("Informe o sal�rio do funcion�rio: ");
    scanf("%f",&salario);
    printf("\n");
    if(salario < 1045){
        printf("Voc� ganha menos do que um sal�rio m�nimo.");
    }else{
        printf("Voc� ganha pelo menos um sal�rio m�nimo.");
    }


    return 0;
}
