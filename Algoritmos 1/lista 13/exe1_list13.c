#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char opc;
	float peso, alt, imc;
	
	printf("Deseja fazer o teste?(s/n) ");
	scanf(" %c", &opc);
	
	while(opc == 's' || opc == 'S'){
		printf("Digite o seu peso: ");
		scanf("%f", &peso);
		printf("Digite a sua altura: ");
		scanf("%f", &alt);
		
		imc = peso / pow(alt, 2);
		
		printf("\nSeu IMC é %0.2f!\n", imc);
		
		printf("\nDeseja fazer o teste?(s/n) ");
		scanf(" %c", &opc);
	}
	
	printf("\nAté a próxima!\n");
	
	return 0;	 	
}