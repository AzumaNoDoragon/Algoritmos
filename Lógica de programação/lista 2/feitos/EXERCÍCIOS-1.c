/*O dia da semana para uma data qualquer pode ser calculado pela seguinte f�rmula:
Dia da semana = (int(2.6*M-0.1)+D+A+Adiv4+Sdiv4-2*S)MOD7
int() retorna a parte inteiro de um n�mero
M � representa o n�mero do m�s. Janeiro e fevereiro s�o os meses 11 e 12 do ano precedente,
mar�o � o m�s 1 e dezembro � o m�s 10;
D � representa o dia do m�s;
A � representa o n�mero formado pelos dois �ltimos algarismos do ano;
S � representa o n�mero formado pelos dois primeiros algarismos do ano;
Os dias da semana s�o numerados de zero a seis; Domingo corresponde a zero, Segunda a 1, e
assim por diante.*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int ds, d1, m1, a1, s1, ano;
	
	printf("Calcular o dia da semana\n");
	printf("Digite dia, mes e ano em formato DD/MM/AAAA (com as barras)\n");
	scanf("%d/%d/%d",&d1,&m1,&ano);
	
		if((m1 == 1) || (m1 == 2)){
			m1 = m1 + 10;
			}
			else{
			m1 = m1 - 2;
			}
	
	s1 = ano / 100;	
	a1 = ano % 100;
	
	ds = ((int)(2.6*m1-0.1)+d1+a1+a1/4+s1/4-2*s1)%7;
	
	printf("\nO dia em quest�o �: ");
	if (ds == 0)
		printf("domingo\n");
	if (ds == 1)
		printf("segunda-feira\n");
	if (ds == 2)
		printf("ter�a-feira\n");
	if (ds == 3)
		printf("quarta-feira\n");
	if (ds == 4)
		printf("quinta-feira\n");
	if (ds == 5)
		printf("sexta-feira\n");
	if (ds == 6)
		printf("sabado\n");
	
	return 0;
}