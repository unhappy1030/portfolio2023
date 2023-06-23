#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, c=65;
	int a[100][100]={0,};
	scanf("%d", &t);
	for(i=t-1;i>=0;i--)
	{
		for(j=t-1;j>=0;j--)
		{
			if(c==91)
			{
				c=65;
			}
			a[j][i]=c;
			c++;
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
