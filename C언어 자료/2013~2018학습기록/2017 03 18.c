#include <stdio.h>
#include <stdlib.h>
int i, j ,t, v, m;
int a[13][13]={0,};
int f(int, int);

int main(int argc, char *argv[]) {
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		f(t, i);	
	}
	printf("%d", r);
	return 0;
}
int f(int k, int n)
{
	a[0][n]=1;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i == 0 || j == n)
			{
				a[i][j]=1;
			}
			
		}
	}
}
