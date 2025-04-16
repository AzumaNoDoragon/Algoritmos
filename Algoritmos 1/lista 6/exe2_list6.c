#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça o salário de um funcionário. Se o salário for
menor do que R$ 1.045, o algoritmo deve apresentar a mensagem “você
ganha menos do que um salário mínimo”. Do contrário, o algoritmo deve
apresentar a mensagem “você ganha pelo menos um salário mínimo”.*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, salMinimo;
 	salMinimo = 1045;
	  	
    printf("Digite o valor do seu salario: ");
	scanf("%f", &sal);
	
	if(sal<salMinimo){
		printf("Você recebe menos que um salário mínimo");
	} else if (sal==salMinimo){
		printf("Você recebe exatamente um salário mínimo");
	} else {
		printf("Você recebe mais que um salário mínimo");
	}
	
	return 0;
}