#include <stdio.h>



int main() 
{
	int mes;

	printf("qual o mes:");
	scanf("%d", &mes);

  if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
  {
    printf("mês: %d tem 31 dias", mes);
  }
  else 
    if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
      printf("o mes: %d tem 30 dias ", mes);
    }
    else 
      if(mes == 2)
      {
       printf("o mes: %d tem 28 dias", mes);
      }
      else
      printf("valor incorreto");

  return 0;


}

