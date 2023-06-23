#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int* pa;
	int **ppa;
	int a=7;
	printf("%p \n", &a);
	pa=&a;
	printf("%p \n", pa);
	*pa=4;
	printf("%d \n", a);
	ppa=&pa;
	printf("%p \n", *ppa);
	
	return 0;
}
