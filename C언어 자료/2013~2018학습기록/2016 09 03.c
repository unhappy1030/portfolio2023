#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, l=100000, k=0, x=0, m=0, y=0;
	int a[100][100]={0,};
	int c[100]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	while(1)
	{
		l=100000;
		for(i=0;i<t;i++)
		{
			if(a[k][i]!=0)
			{
				if(l > a[k][i])
				{
					l=a[k][i];
					x=i;
				}
			}
		}
		if(c[k]==0 || c[x]==0)
		{
			m=m+a[k][x];
		}
		c[x]=1;
		c[k]=1;
		a[k][x]=0;
		a[x][k]=0;
		if(y==t)
		{
			break;
		}
		y++;
		k=x;
	}
	printf("%d", m);
	return 0;
}
