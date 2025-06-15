#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	int i, j, count = 0, **a;
	
	a = (int**)malloc(4 * sizeof(int*));
	
	for(i = 0; i <= 3; i++){
		*(a + i) = (int*)malloc(3 * sizeof(int));
		for(j = 0; j <= 2; j++){
			*(*(a + i) + j) = count += 1;
		}
	}
	
	for(i = 0; i <= 3; i++){
		for(j = 0; j <= 2; j++){
			printf(" %d ", *(*(a + i) + j));
		}
		printf("\n");
	}
	
	return 0;
}