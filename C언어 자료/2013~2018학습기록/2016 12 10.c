#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t;
	int b[10270]={0,};
	int c[10270]={0,};
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
			if(a[i][1]==j)
			{
				c[j]=1;
			}
		}
	}
	for(i=0;i<10270;i++)
	{
		printf(" %d", b[i]);
	}
	printf("\n");
	for(i=0;i<10270;i++)
	{
		if(b[i]<b[i+1])
		{
			k=0;
		}
		if(b[i]>b[i+1] && k==0)
		{
			r++;
			printf(" %d", i-270);
			k=1;
			for(j=0;j<t;j++)
			{
				if(a[j][0]<=i && i<=a[j][1])
				{
					c[a[j][1]]=0;
				}
			}
		}
		if(b[i]==b[i+1] && c[i]==1)
		{
			r++;
			printf(" %d", i-270);
			for(j=0;j<t;j++)
			{
				if(a[j][0]<=i && i<=a[j][1])
				{
					c[a[j][1]]=0;
				}
			}
		}
	}
	printf("\n%d", r);
	return 0;
}
