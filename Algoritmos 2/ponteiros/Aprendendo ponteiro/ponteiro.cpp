#include <stdio.h>

int main(int argc, char** argv)
{
	int a;
	a = 3;
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%p\n", &a);
	return 0;
}