/*
Luiz Fernando Moreira Dom�nico

3. Fa�a um algoritmo que concatene as seguintes mensagens em uma s�:
 o �Ol�, amigo! �
 o �Este texto tem uma v�rgula dentro das aspas. �
 o �Mas eu sei que quando est� dentro das aspas ela representa apenas
 uma v�rgula. �
 o �E quando est� fora representa o operador de concatena��o.�
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char cat[100];


    sprintf(str1,"Ol�, amigo! ");
    sprintf(str2,"Este texto tem uma v�rgula dento das aspas. ");
    sprintf(str3, "Mas eu sei que quando est� dentro das aspas ela representa apenas uma v�rgula. ");
    sprintf(str4, "E quando est� fora representa o operador de concatena��o.");

    sprintf(cat,"%s %s %s %s",str1, str2, str3, str4);

    puts(cat);



    return 0;
}
