#include <stdio.h>
#include <locale.h>

/*Fa�a um algoritmo que pe�a a altura (em metros) e a sua massa (em quilos). 
Em seguida, deve-se calcular o �ndice de Massa Corporal, da seguinte forma: 
IMC=massa/(altura * altura) 
De acordo com o resultado, o algoritmo deve apresentar uma mensagem, 
como abaixo: 
a. Abaixo de 17: �muito abaixo do peso�; 
b. Abaixo de 18.5 (e maior ou igual a 17): �abaixo do peso�; 
c. Abaixo de 25 (e maior ou igual a 18.5): �peso normal�; 
d. Abaixo de 30 (e maior ou igual a 25): �acima do peso�; 
e. Abaixo de 35 (e maior ou igual a 30): �obesidade I�; 
f. Abaixo de 40 (e maior ou igual a 35): �obesidade II (severa)�; 
g. Se n�o for nenhuma das op��es (igual ou maior que 40): �obesidade III (m�rbida)�.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float alt, massa, imc;
	
	printf("Digite sua altura (em metros): ");
	scanf("%f", &alt);
	printf("Digite sua massa (em quilos): ");
	scanf("%f", &massa);

	imc = massa / (alt * alt);
	
	printf("Seu IMC � %0.2f!\n", imc);
	
	if(imc<17)
		printf("\nMuito abaixo do peso!\n");
	else if(imc<18.5)
		printf("\nAbaixo do peso!\n");
	else if(imc<25)
		printf("\nPeso normal!\n");
	else if(imc<30)
		printf("\nAcima do peso!\n");
	else if(imc<35)
		printf("\nObesidade I!\n");
	else if(imc<40)
		printf("\nobesidade II (severa)!\n");
	else
		printf("\nObesidade III (m�rbida)!\n");
	
	return 0;
}