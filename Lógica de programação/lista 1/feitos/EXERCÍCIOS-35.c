/*Calcular o sal�rio final de um trabalhador, recebendo a quantidade de horas trabalhadas, a
quantidade de horas extras, quantidade de horas ausentes e o valor do sal�rio m�nimo, sabendo que:
a)as horas trabalhadas e ausentes valem 4% do sal�rio m�nimo;
b)as horas extras valem 50% a mais do que as horas trabalhadas;
c)o sal�rio final � igual a soma das horas trabalhadas com as hora extras, descontadas as horas
ausentes e 11% de INSS.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float qht, qhe, qha, sm, sf, vht, vha, vhe;
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f",&sm);
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f",&qht);
	printf("Digite a quantidade de horas extras: ");
	scanf("%f",&qhe);
	printf("Digite a quantidade de horas ausentes: ");
	scanf("%f",&qha);
	
	vht = qht * sm * 0.04;
	vha = qha * sm * 0.04;
	vhe = qhe * sm * 0.04;
	sf = (vht + vha - vhe) * 0.89;
	
	printf("\nO sal�rio final � %2.2f\n",sf);
	
	return 0;
}