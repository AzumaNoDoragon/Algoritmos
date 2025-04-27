/*Gabriel Santos Afini da Silva
RA 2267284

A05-01
Faça um programa que calcule a área de um retângulo
- Os tamanhos dos lados (base e altura) devem ser digitados pelo usuário na função principal (função main( ))
- A área do retângulo deve ser calculado dentro de uma função chamada area_retangulo
- A função area_retangulo deve ser do tipo float
- A área do retângulo, retornada pela função area_retangulo deve ser impressa na função main()*/

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
		
	printf("Digite o valor da base do retângulo\n");
	scanf("%f",&bas);
	printf("Digite o valor da altura do retângulo\n");
	scanf("%f",&alt);
	
	area = area_retangulo(bas, alt);
	printf("\nA área do retângulo é %.2f\n", area);
		
	return 0;
}