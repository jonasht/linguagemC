#include <stdio.h>

int main()
{
  float soma = 1;
  float e = 1;
  int n;
  printf("ex: 5 qual o n: ");
  scanf("%d", &n);
  for(float i=1 ; i<=n ; i++){
    soma = i * soma;
    e = e + (1 / (soma));
  }
  printf("\n o valor de euler: %f\n", e);
  return 0;
}