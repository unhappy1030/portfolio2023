#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[6]={0,};
	int b[6]={500, 100, 50, 10, 5, 1};
	int i, j, t, x, y=0, max=0;
	scanf("%d", &t);
	for(i=0;i<6;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=5;i>-1;i--)
	{
		if(t>=a[i])
		{
			x=t-a[i];
			max+=a[i];
		}
	}
	printf("%d", max);
	return 0;
}
