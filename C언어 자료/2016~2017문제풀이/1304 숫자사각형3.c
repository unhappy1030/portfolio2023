#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j, t, n=1;
	int a[100][100]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			a[j][i]=n;
			n++;
		}	
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%d ", a[i][j]);		
		}
		printf("\n");
	}
	return 0;
}
