/* 
Luiz Fernando Moreira Dom�nico

5. Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Em seguida, o
algoritmo deve pedir a confirma��o da senha. Se a senha repetida for igual
� original, apresentar a mensagem �Senha criada com sucesso�. Do
contr�rio, apresentar a mensagem �senha n�o confere�.

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    float senha, senha_repetida;

    printf("Informe uma senha apenas num�rica: ");
    scanf("%f",&senha);

    printf("Confirme a senha digitada anteriormente, escrevendo-a novamente: ");
    scanf("%f",&senha_repetida);
    printf("\n");
    if(senha == senha_repetida){
        printf("Senha criada com sucesso!");
    }else{
        printf("Senha n�o confere.");
    }


    return 0;
}
