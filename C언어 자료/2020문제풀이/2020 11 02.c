#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	scanf("%d %d", &i, &j);
	if(i==j)
	{
		printf("i��j�� %d�� ����.", i);
	}
	else
	{
		printf("i�� %d�̰� j�� %d�̴�.", i, j);
	}
	return 0;
}
