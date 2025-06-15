#include <stdio.h>

void contar(int i);

int main(int argc, char** argv)
{
	contar(2);
	return 0;
}

void contar(int i){
	if(i <= 8){
		printf("%d\n", i);
		i += 2;
		contar(i);
	}
}