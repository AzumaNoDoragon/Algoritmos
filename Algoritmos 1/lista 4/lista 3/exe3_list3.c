#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	
	float raio, alt, preco, m_quad, custo, latas;
	
	printf("Digite o raio do tanque: ");
	scanf("%f", &raio);
	printf("Digite a altura do tanque: ");
	scanf("%f", &alt);
	printf("Digite o preço de cada lata de tinta: ");
	scanf("%f", &preco);
	
	m_quad = 2 * 3.1415 * raio * alt;
	latas = m_quad / 15;
	custo = latas * preco;
	
	printf("\nSerão necessarias %0.2f latas de tinta e tera o custo de %0.2f reais!", latas, custo);
	
	latas = ceil(latas);
	custo = latas * preco;
	
	printf("\nMas, como não é possivel comprar partes de uma lata,\nserão necessarias %0.0f latas de tinta e tera o custo de %0.2f reais!\n", latas, custo);
	
	return 0;
}