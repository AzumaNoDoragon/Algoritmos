/*Escreva um programa que leia dois n�meros. Caso a soma dos dois n�meros apresente um n�mero
par e seja maior que 100 mostre a metade da soma na tela, se a soma for um n�mero par menor que
100, mostre a soma multiplicada por 2. Se a soma resultar em um n�mero �mpar apenas apresente a
soma.
*/

#include <stdio.h>
#include <locale.h>

int main(){	
	setlocale(LC_ALL,"PORTUGUESE");
	int n1, n2, calc, ip, result;
	
	printf("Digite dois n�meros separados por enter\n");
	scanf("%d%d",&n1,&n2);
	
	calc = n1 + n2;
	ip = calc % 2;
	
	printf("\nO valor � ");
	if ((calc >= 100) && (ip == 0)){
		result = calc / 2;
		printf("%d\n",result);}
	if ((calc < 100) && (ip == 0)){
		result = calc * 2;
		printf("%d\n",result);}
	if (ip != 0){
		printf("%d\n",calc);}
	
	return 0;
}