#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	float s_min, h_trab, h_extra, h_aus, v_hora, s_brut, s_liq;
    
    printf("Insira o valor do salário mínimo: ");
    scanf("%f", &s_min);
    printf("Insira suas horas trabalhadas: ");
    scanf("%f", &h_trab);
    printf("Insira suas horas extras: ");
    scanf("%f", &h_extra);
    printf("Insira suas horas ausentes: ");
    scanf("%f", &h_aus);
    
    v_hora = s_min * 0.04;
    s_brut = (h_trab * v_hora) + (h_extra * (v_hora * 1.5)) - (h_aus * v_hora);
    s_liq = s_brut * 0.89;

    printf("O salário final do trabalhador é: R$ %0.2f\n", s_liq);
    
    return 0;
}