#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que peça o salário de um funcionário. Se o salário for
maior do que R$ 10.000, o programa deverá apresentar a mensagem “você
ganha bem!”*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	int sal;
	
	printf("Digite o seu salário ");
	scanf("%d", &sal);
	
	if(sal>=10000)
		printf("você ganha bem!");
	
	return 0;
}