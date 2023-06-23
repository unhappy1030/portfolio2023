#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t;
	int b[10270]={0,};
	int c[10270]={0,};
	int f[10270]={0,};
	int r=0, k=0;
	int a[100][2]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
		a[i][0]=a[i][0]+270;
		a[i][1]=a[i][1]+270;
	}
	for(i=0;i<t;i++)
	{
		for(j=a[i][0];j<=a[i][1];j++)
		{
			b[j]++;
			if(j==a[i][1])
			{
				c[i]==1;
			}
		}
	}
	for(i=0;i<10270;i++)
	{
		if(b[i]<=b[i+1])
		{
			f[i]=0;
		}
		if(b[i]>b[i+1] && k==0)
		{
			f[i]=1;
			r++;
			k=1;
			for(i=0;i<t;i++)
			{
				if(a[i][0]<=i || i<=a[i][1])
				{
					for(j=a[i][0];j<a[i][1];j++)
					{
						b[j]--;
					}
				}
			}
		}
		if(b[i]<b[i+1])
		{
			k=0;
		}
		if(c[i]==1)
		{
			if(b[i]==b[i+1])
			{
				r++;
			}
		}
	}
	printf("%d", r);
	return 0;
}
