#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça o salário do usuário e apresente uma 
mensagem de qual classe social você pertence de acordo com a faixa 
salarial: 
a. Se ganha mais de R$ 18.000: “você é classe A”; 
b. Se ganha mais de R$ 9.000: “você é classe B”; 
c. Se não for nenhuma das anteriores (se ganha menos de R$ 9.000): 
“você é classe C ou menor”. */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float sal;
	
	printf("Digite seu salário: ");
	scanf("%f", &sal);
	
	if(sal>=18000)
		printf("\nVocê é classe A!\n");
	else if(sal>=9000)
		printf("\nVocê é classe B!\n");
	else
		printf("\nVocê é classe C ou menor!\n");
		
	return 0;
}