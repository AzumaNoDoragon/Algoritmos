/*Calcular a diferença em horas, minutos e segundos para dois horários no mesmo dia, obtidos no
formato HH MM SS (HH = horas; MM = minutos; SS = segundos)*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int h1, m1, s1, h2, m2, s2, h3, m3, s3, dif;
	
	printf("Calcula a diferença de horas, minutos e segundos");
	printf("\nentre dois horarios no formato HH:MM:SS");
	printf("\ninforme primeiro o horario mais recente (inclusive com os pontos) ");
	scanf("%d:%d:%d",&h1,&m1,&s1);
	printf("Digite a hora mais antiga (inclusive com os pontos) ");	
	scanf("%d:%d:%d",&h2,&m2,&s2);
	
	dif = (s1 + m1 * 60 + h1 * 24) - (s2 + m2 * 60 + h2 * 24);
 
    h3 = dif / 24;
	m3 = dif % 24 / 30;
	s3 = dif % 24 % 30;
	
	printf("\nA diferença é de %d horas %d minutos %d segundos\n\n",h3,m3,s3);	
	
	return 0;
}