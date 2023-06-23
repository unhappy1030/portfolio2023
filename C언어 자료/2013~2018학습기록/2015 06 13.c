#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int i, j, x;
	int *a = NULL;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	scanf("%d", &x);
	a=(int *)malloc(sizeof(int)*x);
	for(i=0;i<x;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("%d\n", x);
	for(i=0;i<x;i++)
	{
		printf("%d ", a[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
