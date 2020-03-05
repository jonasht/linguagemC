#include <stdio.h>

int main()
{
	int x;
	int *ponteiro;
	
	x = 100;
	*ponteiro = 100;
	
	ponteiro = ponteiro + 1;
	x = ponteiro + 1;
	
	printf("ponteiro: | %d | %d |", x, *ponteiro);
	
	
	return 0;
}
