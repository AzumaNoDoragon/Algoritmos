/*Gabriel Santos Afini da Silva
RA 2267284

A04-02
Desenvolva um programa em C que encontre o maior e o menor valor entre 5 valores
do tipo float que são digitados pelo usuário. A leitura dos valores, a impressão
dos resultados na tela e as comparações para encontrar o maior e o menor devem
ser realizados dentro da função "encontra_valores()". A função deve ser do tipo
void e não deve receber parâmetros.
Observação: 
A biblioteca <math.h> permite utilizar a constante "INFINITY". Quando uma variável
recebe o valor INFINITY,  qualquer valor comparado com ela será menor.  Por exemplo,
se x = INFINITY, o valor de x será maior que qualquer valor.  Da mesma forma,
se x = -INFINITY, qualquer valor comparado será maior que x. Esse recurso pode ser
útil para resolver o exercício.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define L 5

int main(void){
	setlocale(LC_ALL,"PORTUGUESE");
	float num[L], maior, menor; 
	int i, j;

void encontra_valor_maior(){
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			if(num[i]>maior){
				maior=num[i];
			}
		}
	}
	printf("O maior valor é %.2f\n", maior);
}
void encontra_valores_menor(){
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(num[i]<menor){
				menor=num[i];
			}
		}
	}
	printf("O menor valor é %.2f\n", menor);
}
	
	for(i=0;i<L;i++){
		printf("Digite o %dº valor para que seja encontrado o menor e o maior\n", i+1);
		scanf("%f",&num[i]);
	}
	
	encontra_valor_maior();
	encontra_valores_menor();
	
	return 0;
}
