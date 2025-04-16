#include <stdio.h>
#include <locale.h>

/*
Faça um programa que peça 5 números reais. Depois, o programa deve apresentar a média. 
Por último, o programa deve procurar qual número digitado é o mais próximo da média e apresentá-lo na tela. 
*/

int main(){
	int i;
	float media = 0, prox, menor_dif, var[5];
	
	for(i = 0; i < 5; i++){
		printf("Digite um valor real: ");
		scanf("%f", &var[i]);
		media += var[i];
	}
	
	media = media / 5;
	prox = var[0];
	menor_dif = var[0] - media;
	if(menor_dif < 0){
		menor_dif = -menor_dif;
	}
	
	for(i = 1; i < 5; i++){
		float diferenca = var[i] - media;
		
		if(diferenca < 0){
			diferenca = -diferenca;
		}
		
		if(diferenca < menor_dif){
			menor_dif = diferenca;
			prox = var[i];
		}
	}
	
	printf("A media e: %0.2f ", media);
	printf("O valor mais proximo e: %f0.2", prox);
	
	return 0;
}