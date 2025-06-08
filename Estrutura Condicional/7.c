/*
Luiz Fernando Moreira Dom�nico
 
7. Fa�a um algoritmo que pe�a o nome de um usu�rio. Em seguida, o
algoritmo deve pedir o g�nero do usu�rio (�f� para feminino e �m� para
masculino). Se o usu�rio for do sexo feminino, apresentar a mensagem
�Ol�, senhora <nome>�. Do contr�rio, apresentar a mensagem �Ol�, senhor
<nome>�. Observa��o: fa�a de conta que o usu�rio sempre digitar� �f� ou
�m�.

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char genero;

    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe seu sobrenome: ");
    scanf("%s",&sobrenome);


    printf("Informe seu g�nero ('m' -> masculino ou 'f' -> feminino): ");
    scanf(" %c",&genero); // Espa�o antes do caractere c para limpar o buffer de entrada.

    if(genero == 'm' || genero == 'M'){
        printf("Ol�, senhor %s %s.", nome, sobrenome);
    }else if(genero == 'f' || genero == 'F'){
        printf("Ol�, senhora %s %s.",nome, sobrenome);
    }




    return 0;
}
