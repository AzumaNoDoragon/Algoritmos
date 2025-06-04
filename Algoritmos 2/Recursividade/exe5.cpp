#include <stdio.h>

void contar(int i);

int main(int argc, char** argv)
{
	contar(5);
	return 0;
}

void contar(int i){
	if(i >= 1){
		printf("%d\n", i);
		contar(--i);
	}
}