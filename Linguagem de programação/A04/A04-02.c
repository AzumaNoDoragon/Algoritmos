/*Gabriel Santos Afini da Silva
RA 2267284

A04-02
Desenvolva um programa em C que encontre o maior e o menor valor entre 5 valores
do tipo float que s�o digitados pelo usu�rio. A leitura dos valores, a impress�o
dos resultados na tela e as compara��es para encontrar o maior e o menor devem
ser realizados dentro da fun��o "encontra_valores()". A fun��o deve ser do tipo
void e n�o deve receber par�metros.
Observa��o: 
A biblioteca <math.h> permite utilizar a constante "INFINITY". Quando uma vari�vel
recebe o valor INFINITY,  qualquer valor comparado com ela ser� menor.  Por exemplo,
se x = INFINITY, o valor de x ser� maior que qualquer valor.  Da mesma forma,
se x = -INFINITY, qualquer valor comparado ser� maior que x. Esse recurso pode ser
�til para resolver o exerc�cio.*/

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
	printf("O maior valor � %.2f\n", maior);
}
void encontra_valores_menor(){
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(num[i]<menor){
				menor=num[i];
			}
		}
	}
	printf("O menor valor � %.2f\n", menor);
}
	
	for(i=0;i<L;i++){
		printf("Digite o %d� valor para que seja encontrado o menor e o maior\n", i+1);
		scanf("%f",&num[i]);
	}
	
	encontra_valor_maior();
	encontra_valores_menor();
	
	return 0;
}
