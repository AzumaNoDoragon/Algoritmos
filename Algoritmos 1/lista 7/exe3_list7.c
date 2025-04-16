#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça a temperatura da água de um recipiente, em 
Célsius. De acordo com a temperatura, o algoritmo deve apresentar a 
seguinte mensagem: 
a. Se for superior a 100 ºC: “A água está em estado de vapor”; 
b. Se for superior a 0 ºC: “A água está em estado líquido”; 
c. Se não for nenhuma das anteriores, “A água está em estado sólido”.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float temp;
	
	printf("Digite a temperatura da água em Celcius: ");
	scanf("%f", &temp);
	
	if(temp>100)
		printf("\nA água está em estado de vapor!\n");
	else if(temp>0)
		printf("\nA água está em estado líquido!\n");
	else
		printf("\nA água está em estado sólido!\n");
		
	return 0;
}