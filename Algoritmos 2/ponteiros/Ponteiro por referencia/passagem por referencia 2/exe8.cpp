/*
	Fa�a um programa que leia o sal�rio de um trabalhador, calcule a desvaloriza��o em 
	um ano, usando como base a infla��o anual de 2015 (a infla��o foi de 10,67%) e 
	mostre o quanto de poder aquisitivo ele perdeu (supondo que n�o tenha recebido 
	reajuste ou aumento).  
	Por exemplo, uma pessoa que ganhava R$ 1000 em janeiro de 2015 deveria ganhar R$ 
	1106,7 em janeiro de 2016 para que seu sal�rio acompanhe a infla��o. O c�lculo foi 
	feito da seguinte forma: salario_novo = 110,67 * salario_antigo / 100. 
	Caso este trabalhador n�o receba reajuste, isso significa que ele teve uma perda 
	aquisitiva de R$ 106,7 (isto �: salario_novo � salario_antigo).
*/

#include <stdio.h>

void le(float *salarioAntigo);
void calculaCorrecao(float inflacao, float salarioAntigo, float  *salarioCorrigido);
void calculaErro(float salarioAntigo, float salarioCorrigido, float *perda);
void apresenta(float salarioCorrigo, float perda);

int main() {
	float inflacao = 10.67;
	float salarioAntigo, salarioCorrigido, perda;
	
	le(&salarioAntigo);
	calculaCorrecao(inflacao, salarioAntigo, &salarioCorrigido);
	calculaErro(salarioAntigo, salarioCorrigido, &perda);
	apresenta(salarioCorrigido, perda);

	return 0;
}

void le(float *salarioAntigo){
	printf("Digite o sal�rio do trabalhador em janeiro de 2015: R$ ");
	scanf("%f", salarioAntigo);
}

void calculaCorrecao(float inflacao, float salarioAntigo, float  *salarioCorrigido){
	*salarioCorrigido = salarioAntigo * (1 + inflacao / 100);
}

void calculaErro(float salarioAntigo, float salarioCorrigido, float *perda){
	*perda = salarioCorrigido - salarioAntigo;
}

void apresenta(float salarioCorrigo, float perda){
	printf("\nSal�rio necess�rio para manter o poder aquisitivo: R$ %.2f\n", salarioCorrigo);
	printf("Perda de poder aquisitivo: R$ %.2f\n", perda);
}