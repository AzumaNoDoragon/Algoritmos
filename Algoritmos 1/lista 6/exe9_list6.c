#include <stdio.h>
#include <locale.h>

/*Em uma ind�stria de parafusos, um algoritmo determina se a produ��o 
est� boa ou ruim. Uma produ��o � ruim quando o n�mero de parafusos 
com defeito for maior do que 10% do total produzido. Fa�a um algoritmo 
que pe�a o n�mero total de parafusos produzidos e, em seguida, pe�a o 
n�mero de parafusos com defeito. O algoritmo, ent�o, deve calcular o limite 
de pe�as com defeito permitidas (com base no total de pe�as produzidas e 
a porcentagem limite) e apresentar se a produ��o est� boa ou ruim. */

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
		printf("\nA produ��o esta defeituosa, deve-se configurar a m�quina!\n ");
	else
		printf("\nA produ��o esta normal!\n");
	
	return 0;
}