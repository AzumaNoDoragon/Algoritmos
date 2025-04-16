#include <stdio.h>
#include <locale.h>

/*
Elabore um algoritmo que armazene um vetor 15 preços de produtos. 
	a) Apresente o vetor original; 
	b) Apresente o saldo em dinheiro do estoque de produtos. 
	c) Modifique o vetor de modo que os valores que estão nas posições pares tenham um aumento de 5%; 
	d) Apresente o vetor resultante em ordem inversa. 
*/

int main(){
	int i;
	float calc = 0, vet[15];
	
	printf("Adicione o preco dos produtos:\n");
	for(i = 0; i < 15; i++){
		printf("Produto %d: ", i + 1);
		scanf("%f", &vet[i]);
		}
	
	printf("\nO valor de todos os produtos sao:\n");
	for(i = 0; i < 15; i++){
		printf("Produto %d: %0.2f\n", i + 1, vet[i]);
	}
	
	for(i = 0; i < 15; i++){
		calc += vet[i];
	}
	printf("O saldo em estoque e: %0.2f\n", calc);
	
	for(i = 0; i < 15; i += 2){
		vet[i] += vet[i] * 0.05;
	}
	
	printf("\nO valor de todos os produtos com aumento e na ordem inversa sao:\n");
	for(i = 14; i >= 0; i--){
		printf("Produto %d: %0.2f\n", i + 1, vet[i]);
	}
	
	return 0;
}