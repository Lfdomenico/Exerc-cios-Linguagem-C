/* 
Luiz Fernando Moreira Dom�nico

4. Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Se a senha for
diferente de 123456, apresentar a mensagem �senha n�o confere!�.

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    float senha;

    printf("Insira uma senha apenas num�rica: ");
    scanf("%f",&senha);

    if(senha != 123456){
        printf("Senha n�o confere!");
    }else{
        printf("Senha correta!");
    }

    return 0;
}
