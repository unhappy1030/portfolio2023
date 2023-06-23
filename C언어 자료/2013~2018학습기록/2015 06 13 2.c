#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i, j, x, y;
	int **a = NULL;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%d%d", &x, &y);
	a=(int **)malloc(sizeof(int)*x);
	for(i=0;i<x;i++)
	{
		a[i]=(int *)malloc(sizeof(int)*y);
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("%d %d\n", x, y);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d", a[i][j]);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
