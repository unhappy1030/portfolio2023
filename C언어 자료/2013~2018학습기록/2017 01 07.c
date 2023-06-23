#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, w, pr, k, n, m, c, r=0;
	int a[10000][2]={0,};
	int t[10000];
	scanf("%d%d", &w, &pr);
	for(i=0;i<w;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	for(i=0;i<w;i++)
	{
		k=0;
		n=0;
		c=0;
		if(t[i]==1)
		{
			continue;
		}
		if((a[i][0]*a[i][1])+(a[i+1][0]*a[i+1][1]) > (a[i][0]*(a[i][1]+a[i+1][1]))+(a[i+1][1]*pr))
		{
			m=(a[i][0]*a[i][1])+(a[i+1][0]*a[i+1][1]);
			k=a[i][1]+a[i+1][1];
			n=a[i+1][1];
			t[i]=1;
			t[i+1]=1;
			for(j=i+2;j<w;j++)
			{
				if(c==1)
				{
					continue;
				}
				k=k+a[j][1];
				n=n+a[j][1];
				m=m+(a[j][0]*a[j][1]);
				if(k+(n*pr)<m)
				{
					t[j]=1;
				}
				else
				{
					c=1;
					continue;
				}
				r=r+((a[i][0]*k)+(n*pr));
			}
		}
		else
		{
			t[i]=1;
			r=r+(a[i][0]*a[i][1]);
			continue;
		}
		
	}
	printf("%d", r);
	return 0;
}
