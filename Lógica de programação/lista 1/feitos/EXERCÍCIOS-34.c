/* Calcular a quantidade de latas de tinta necess�rias, e tamb�m o custo, para pintar um tanque
cil�ndrico de combust�vel, em que s�o fornecidos a altura e o raio do mesmo, al�m do pre�o da lata de
tinta 10,50 418
litro de tinta rende 10 metros�
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float r, a, pi, q, v, qr, area, litros, valor;
	pi = 3.1415;
	
	printf("Para saber quantas latas de tinta ser� preciso e o valor total\n");
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
		
	printf("\nUtilizar� %.0f latas e o valor ser� de %.2f reais\n",ceil(litros),valor);
	
	return 0;
} 