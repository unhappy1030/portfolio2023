#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j, t, k, r=0, w=0, p=0, m=0, n=0;
	int a[100][100]={0,};
	int c[100]={0,};
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		for(j=0; j<t; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	while(1)
	{
		for(i=0; i<t; i++)
		{
			if( k >= a[w][i] && a[w][i] > 0)
			{
				k=a[w][i];
				n=i;
				a[w][i]=0;
				a[i][w]=0;
			}
		}
		m++;
		if(w==c[p])
		{
			r=r+k;
			p++;
			c[p]=n;
			m=0;
		}
		w=c[m];
		if(p == t)
		{
			break;
		}
	}
	printf("%d", r);
	return 0;
}
