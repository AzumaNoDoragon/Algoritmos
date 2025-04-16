#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	float p_mont, ipi, icm, lucro, p_imp, p_venda;
	
	printf("insira o valor do automóvel: ");
	scanf("%f", &p_mont);
	
	ipi = p_mont * 0.11;
	icm = p_mont * 0.17;
	lucro = p_mont * 0.15;
	p_imp = ipi + icm;
	p_venda = p_mont + lucro + p_imp;
	
	printf("\nO valor final do automóvel é R$%0.2f, sendo R$%0.2f o valor do IPI e R$%0.2f o ICM.", p_venda, ipi, icm);
	printf("\nTotalizando em R$%0.2f o valor do imposto!\n", p_imp);
	
	return 0;
}