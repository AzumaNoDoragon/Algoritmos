/*Gabriel Santos Afini da Silva
RA 2267284

A05-01
Fa�a um programa que calcule a �rea de um ret�ngulo
- Os tamanhos dos lados (base e altura) devem ser digitados pelo usu�rio na fun��o principal (fun��o main( ))
- A �rea do ret�ngulo deve ser calculado dentro de uma fun��o chamada area_retangulo
- A fun��o area_retangulo deve ser do tipo float
- A �rea do ret�ngulo, retornada pela fun��o area_retangulo deve ser impressa na fun��o main()*/

#include <stdio.h>
#include <locale.h>

float area_retangulo(float bas_par, float alt_par){
	float area;
	
	area = bas_par * alt_par;
		
	return area;
}

int main(){
	setlocale(LC_ALL,"");
	float bas, alt, area;
		
	printf("Digite o valor da base do ret�ngulo\n");
	scanf("%f",&bas);
	printf("Digite o valor da altura do ret�ngulo\n");
	scanf("%f",&alt);
	
	area = area_retangulo(bas, alt);
	printf("\nA �rea do ret�ngulo � %.2f\n", area);
		
	return 0;
}