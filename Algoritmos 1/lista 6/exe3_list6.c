#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a a temperatura corporal do usu�rio. Se a
temperatura for menor que 37, apresentar a mensagem �voc� est� sem
febre�. Do contr�rio, apresentar a mensagem �voc� est� com febre!�*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float temp;
	
	printf("Digite sua temperatura: ");
	scanf("%f", &temp);

	if(temp<=37)
		printf("Sem febre");
	else
		printf("Voc� esta com febre!!!");
	
	return 0;
}