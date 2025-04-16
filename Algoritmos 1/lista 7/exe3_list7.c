#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a a temperatura da �gua de um recipiente, em 
C�lsius. De acordo com a temperatura, o algoritmo deve apresentar a 
seguinte mensagem: 
a. Se for superior a 100 �C: �A �gua est� em estado de vapor�; 
b. Se for superior a 0 �C: �A �gua est� em estado l�quido�; 
c. Se n�o for nenhuma das anteriores, �A �gua est� em estado s�lido�.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float temp;
	
	printf("Digite a temperatura da �gua em Celcius: ");
	scanf("%f", &temp);
	
	if(temp>100)
		printf("\nA �gua est� em estado de vapor!\n");
	else if(temp>0)
		printf("\nA �gua est� em estado l�quido!\n");
	else
		printf("\nA �gua est� em estado s�lido!\n");
		
	return 0;
}