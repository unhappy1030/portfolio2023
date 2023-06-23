#include <stdio.h>
#include <stdlib.h>
int i, j, t, m, n=0, c, r, x=0, d;
int a[100][100]={0,};
int b[100]={0,};
int Limit();

int main(int argc, char *argv[]) {
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	Limit(1);
	printf("%d", r);
	return 0;
}
int Limit(w)
{
	m=10000;
	for(i=0;i<w;i++)
	{
		n=b[i];
		for(j=0;j<t;j++)
		{
			if(m > a[n][j] && a[n][j] > 0)
			{
				m=a[n][j];
				c=n;
				d=j;
			}
		}	
	}
	if(w==t)
	{
		return 0;
	}
	else
	{
		a[c][d]=0;
		a[d][c]=0;
		x++;
		r=r+m;
		b[x]=d;
		return Limit(w+1);
	}
}
