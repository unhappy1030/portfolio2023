#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j , t=0, x, y;
	int a[10]={0,};
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(j <= i)
			{
				continue;
			}
			if(a[i] > a[j])
			{
				x = a[j];
				a[j] = a[i];
				a[i] = x;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
