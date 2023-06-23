#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[5]={0, 1, 2, 0, 3}, b[5]={1, 2, 4, 3, 4};
	int c[5][5];
	int i, j, k; 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
				c[i][j]=0;
			}
			else
			{
				c[i][j]=99;
			}
			printf("%d ", c[i][j]);
		}
		printf("\n");
	} 
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		c[a[i]][b[i]]=1;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	} 
	for(k=0;k<3;k++)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(c[i][j] > c[i][k] + c[k][j])
				{
					c[i][j] = c[i][k] + c[k][j];
				}
			}
		}
		printf("\n\n");
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		} 
	}
	printf("\n\n");
	printf("%d", c[0][4]);
	return 0;
}
