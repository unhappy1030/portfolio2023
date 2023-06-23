#include<stdio.h>
#include<stdlib.h>
int main (){ 
	int i, j, k;
	scanf("%d%d%d", &i, &j, &k);
	 ((i >= 2) || (i <= 0)) && ((j >= -1) && (j <= 3)) && ((k >= 1) && (k <= 4))? printf("O") : printf("X");
	return 0;
}
