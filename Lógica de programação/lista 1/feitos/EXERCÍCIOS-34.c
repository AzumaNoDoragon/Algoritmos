/* Calcular a quantidade de latas de tinta necessárias, e também o custo, para pintar um tanque
cilíndrico de combustível, em que são fornecidos a altura e o raio do mesmo, além do preço da lata de
tinta 10,50 418
litro de tinta rende 10 metros²
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float r, a, pi, q, v, qr, area, litros, valor;
	pi = 3.1415;
	
	printf("Para saber quantas latas de tinta será preciso e o valor total\n");
	printf("Digite a quantidade de litros que a lata tem: ");
	scanf("%f",&q);
	printf("Digite o rendimento da lata: ");
	scanf("%f",&qr);
	printf("Digite o valor da lata: ");
	scanf("%f",&v);
	printf("Digite o raio do cilindro em metros: ");
	scanf("%f",&r);
	printf("Digite a altura do cilindro em metros: ");
	scanf("%f",&a);
	area = pow (r, 2) * pi * 2 + (2 * (pi * r * a));
	litros = area / qr / q;
	valor = ceil(litros) * v;
		
	printf("\nUtilizará %.0f latas e o valor será de %.2f reais\n",ceil(litros),valor);
	
	return 0;
} 