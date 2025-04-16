#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça a temperatura corporal do usuário. Se a
temperatura for menor que 37, apresentar a mensagem “você está sem
febre”. Do contrário, apresentar a mensagem “você está com febre!”*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float temp;
	
	printf("Digite sua temperatura: ");
	scanf("%f", &temp);

	if(temp<=37)
		printf("Sem febre");
	else
		printf("Você esta com febre!!!");
	
	return 0;
}