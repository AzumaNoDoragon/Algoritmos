#include <stdio.h>

void contar(int i);

int main(int argc, char** argv)
{
	contar(1);
	return 0;
}

void contar(int i){
	if(i <= 5){
		printf("%d\n", i);
		contar(++i);
	}
}