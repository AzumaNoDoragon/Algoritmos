#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a o sal�rio do usu�rio e apresente uma 
mensagem de qual classe social voc� pertence de acordo com a faixa 
salarial: 
a. Se ganha mais de R$ 18.000: �voc� � classe A�; 
b. Se ganha mais de R$ 9.000: �voc� � classe B�; 
c. Se n�o for nenhuma das anteriores (se ganha menos de R$ 9.000): 
�voc� � classe C ou menor�. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float sal;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &sal);
	
	if(sal>=18000)
		printf("\nVoc� � classe A!\n");
	else if(sal>=9000)
		printf("\nVoc� � classe B!\n");
	else
		printf("\nVoc� � classe C ou menor!\n");
		
	return 0;
}