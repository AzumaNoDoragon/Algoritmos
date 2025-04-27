#include <stdio.h>
#include <stdlib.h>

int main(void){
  double aux[10], arr[10], *p1, *p2;
  int i, j, count=0;
  for(i=0;i<10;i++){
    scanf("%lf", &arr[i]);
    aux[i]=arr[i];
  }
  p1 = &arr[0];
  p2 = &aux[1];
  i=0;
  while(i<10){
    if(*p1 == *p2){
    printf("Valor repetido = %.1lf na posicao %d\n", *p1, i);
    count++;
    p2++;
    } else {
    p2++;
  }
  i++;
  }
  printf("count = %d", count);
  return 0;
}