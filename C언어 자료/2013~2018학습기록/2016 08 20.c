#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j ,t, k=0, x=0, y=0, f=0;
	int a[1000]={0,};
	int b[1000]={0,};
	int c[1000]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(a[i]>a[i+1] && b[i]>b[i+1])
			{
				f=a[i];
				a[i]=a[i+1];
				a[i+1]=f;
				f=b[i];
				b[i]=b[i+1];
				b[i+1]=f;
			}
			if(a[i]==a[i+1] && b[i]==b[i+1])
			{
				if(b[i]>b[i+1])
				{
					f=a[i];
					a[i]=a[i+1];
					a[i+1]=f;
					f=b[i];
					b[i]=b[i+1];
					b[i+1]=f;
				}
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("\n%d %d", a[i], b[i]);
	}
	while(1)
	{
		y=0;
		k++;
		for(i=0;i<t;i++)
		{
			if(c[x]=1)
			{
				continue;
			}
			if(a[i]<=a[i] && b[i]<=b[i])
			{
				c[x]=1;
			}
		}
		for(i=0;i<t;i++)
		{
			if(c[i]==1)
			{
				y++;
			}
		}
		if(t==y)
		{
			break;
		}
	}
	printf("%d", k);
	return 0;
}
