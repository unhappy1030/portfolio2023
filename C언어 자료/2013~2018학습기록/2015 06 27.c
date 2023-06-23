#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, i, j, k=1, c;
	scanf("%d %d", &x, &y);
	for(i=0;i<x;i++)
	{
		c=y * (i+1);
		for(j=0;j<y;j++)
		{
			if(i%2==0)
			{
				printf("%d ", k);
			}
			if(i%2==1)
			{
				printf("%d ", c);
				c--;
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}
