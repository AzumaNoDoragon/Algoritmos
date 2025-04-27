/*Em uma pizzaria, cada tulipa de chopp custa R$ 0,80 e uma pizza mista grande custa R$10,0 mais
R$1,50 por tipo de cobertura pedida (queijo, presunto, banana, etc.). Uma turma vai à pizzaria e pede uma
determinada quantidade de “chopps” e uma pizza grande com uma determinada quantidade de
coberturas. Escreva um programa que calcule e exiba a conta e, sabendo quantas pessoas estão à mesa,
quanto cada um deve pagar (não esqueça os 10% do garçom).*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float qc, pg, c, tc, pm, cp, qp, tap, tpp;
	tc = 0.80;
	pm = 10.00;
	cp = 1.50;
	
	printf("Digite a quantidade de chopps pedidos: ");
	scanf("%f",&qc);
	printf("Digite a quantidade de pizzas: ");
	scanf("%f",&pg);
	printf("Digite a quantidade de coberturas: ");
	scanf("%f",&c);
	printf("Dgigite a quantidade de pessoas na mesa: ");
	scanf("%f",&qp);
	tap = ((qc * 0.80) + (pm * 10.00) + (c * 1.50)) * 1.1;
	tpp = tap / qp;
	printf("\nO valor total é %.2f, sendo %.2f para cada pessoa\n",tap,tpp);
	
	return 0;
}