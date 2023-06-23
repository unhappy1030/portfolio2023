#include <stdio.h>
#include <stdlib.h>
int i, j, t, p, q=0;
int a[13][13]={0,};
int b[1000][2]={0,};
int k[2]={0,};
int function(int, int);
int back(int, int)


int main(int argc, char *argv[]) {
	scanf("%d", &t);
	if(t % 2 == 0)
	{
		p=0;
	}
	if(t % 2 == 1)
	{
		p=1;
	}
	function(k[0], k[1]);
	return 0;
}

int function(int n, int m)
{
	q=0;
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(n == i || m == j)
			{
				a[i][j]=1;
			}	
			if(n + q == i && n + q == j)
			{
				a[i][j]=1;
			}
		}
	}
}
