/* 
Luiz Fernando Moreira Dom�nico

10. Fa�a um programa que pe�a um n�mero inteiro e apresente a mensagem
�� par� ou �� �mpar�.
 
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
        int num;

        printf("Informe um n�mero inteiro: ");
        scanf("%i",&num);

        if(num%2 == 0){
            printf("O n�mero digitado � par.");
        }else{
            printf("O n�mero digitado � �mpar.");
        }

    return 0;
}
