#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, n=1;
	int a[2]={0,};
	int b[100][100]={0,};
	scanf("%d%d", &a[0], &a[1]);
	for(i=0;i<a[0];i++)
	{
		if(i%2==0)
		{
			for(j=0;j<a[1];j++)
			{
				b[i][j]=n;
				n++;
			}
		}
		if(i%2!=0)
		{
			for(j=a[1]-1;j>=0;j--)
			{
				b[i][j]=n;
				n++;
			}
		}
	}
	for(i=0;i<a[0];i++)
	{
		for(j=0;j<a[1];j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
