#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i, j, x, y, z;
	int *a = NULL;
	int **b = NULL;
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	scanf("%d", &x);
	a=(int *)malloc(sizeof(int)*x);
	for(i=0;i<x;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &y, &z);
	b=(int **)malloc(sizeof(int)*y);
	for(i=0;i<y;i++)
	{
		b[i]=(int *)malloc(sizeof(int)*y);
	}
	for(i=0;i<y;i++)
	{
		for(j=0;j<z;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("%d %d\n", y, z);
	for(i=0;i<y;i++)
	{
		for(j=0;j<z;j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	printf("%d\n", x);
	for(i=0;i<x;i++)
	{
		printf("%d ", a[i]);
	}
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}

