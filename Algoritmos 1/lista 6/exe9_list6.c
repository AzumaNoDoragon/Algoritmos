#include <stdio.h>
#include <locale.h>

/*Em uma indústria de parafusos, um algoritmo determina se a produção 
está boa ou ruim. Uma produção é ruim quando o número de parafusos 
com defeito for maior do que 10% do total produzido. Faça um algoritmo 
que peça o número total de parafusos produzidos e, em seguida, peça o 
número de parafusos com defeito. O algoritmo, então, deve calcular o limite 
de peças com defeito permitidas (com base no total de peças produzidas e 
a porcentagem limite) e apresentar se a produção está boa ou ruim. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int prod, def;
    float limite;
	
	printf("Digite o total de parafusos produzidos: ");
	scanf("%d", &prod);
	printf("Digite o total de parafusos com defeito: ");
	scanf("%d", &def);
	
	limite = prod * 0.10;

	if (def > limite)
		printf("\nA produção esta defeituosa, deve-se configurar a máquina!\n ");
	else
		printf("\nA produção esta normal!\n");
	
	return 0;
}