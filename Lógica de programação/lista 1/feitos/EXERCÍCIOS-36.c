/*Calcular a diferença em dias, meses e anos entre duas datas fornecidas no formato DD MM AAAA
(DD = dia; MM =mês; AAAA = ano com quatro dígitos)*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int d1, m1, a1, d2, m2, a2, d3, m3, a3, dif;
	
	printf("Calcula a diferença em dias, meses e anos");
	printf("\nentre duas datas no dormato DD/MM/AAAA");
	printf("\ninforme primeiro a data mais recente");
	printf("\nno formato DD/MM/AAAA (inclusive com as barras)");
	scanf("%d/%d/%d",&d1,&m1,&a1);
	printf("\nAgora informe a data mais antiga");
	printf("\nno formato DD/MM/AAAA (inclusive com as barras)");
	scanf("%d/%d/%d",&d2,&m2,&a2);
	
	dif = (d1 + m1 * 30 + a1 * 365) - (d2 + m2 * 30 + a2 * 365);
	
	a3 = dif / 365;
	m3 = dif % 365 / 30;
	d3 = dif % 365 % 30;
	
	printf("\nA diferença é de %d dias %d meses %d anos\n\n",d3,m3,a3);
	
	return 0;
}
