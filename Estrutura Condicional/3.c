/* 
Luiz Fernando Moreira Dom�nico

3. Fa�a um algoritmo que pe�a a temperatura corporal do usu�rio. Se a
temperatura for menor que 37, apresentar a mensagem �voc� est� sem
febre�. Do contr�rio, apresentar a mensagem �voc� est� com febre!�.

*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");
    float temp_corporal;

    printf("Informe sua temperatura corporal: ");
    scanf("%f",&temp_corporal);

    if(temp_corporal < 37){
        printf("Voc� est� sem febre.");
    }else{
        printf("Voc� est� com febre.");
    }

    return 0;
}
