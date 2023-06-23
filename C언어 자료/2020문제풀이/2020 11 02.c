#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j;
	scanf("%d %d", &i, &j);
	if(i==j)
	{
		printf("i와j는 %d로 같다.", i);
	}
	else
	{
		printf("i는 %d이고 j는 %d이다.", i, j);
	}
	return 0;
}
