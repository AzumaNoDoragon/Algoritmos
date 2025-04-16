#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 6 valores inteiros e os apresente na tela logo após serem digitados. 
*/

int main(){
	int var1, var2, var3, var4, var5, var6;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &var1);
	printf("Digite um valor inteiro: ");
	scanf("%d", &var2);
	printf("Digite um valor inteiro: ");
	scanf("%d", &var3);
	printf("Digite um valor inteiro: ");
	scanf("%d", &var4);
	printf("Digite um valor inteiro: ");
	scanf("%d", &var5);
	printf("Digite um valor inteiro: ");
	scanf("%d", &var6);
	
	printf("Os valores digitados sao: %d %d %d %d %d %d", var1, var2, var3, var4, var5, var6);
	
	return 0;
}