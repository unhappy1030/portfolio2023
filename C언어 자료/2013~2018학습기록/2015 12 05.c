#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j, k, t=0, x=0;
	int a[100]={0,};
	int b[100]={0,};
	int c[100]={0,};
	int d[100]={0,};
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		scanf("%d", &a[i]);
		t+=a[i];
	}
	t=t/3;
	for(i=0;i<k;i++)
	{
		if(i==4)
		{
			x=0;
			c[x]=a[i];
			c[x]=t-c[x];
			x++;
			c[x]=a[i+2];
			d[i-4]=c[x]-c[x-1];
		}
		else
		{
			x=0;
			c[x]=a[i];
			c[x]=t-c[x];
			x++;
			c[x]=a[i+2];
			if(i==4)
			{
				d[i-4]=c[x]-c[x-1];
			}
			else
			{
				d[i+1]=c[x]-c[x-1];
			}
		}
		printf("%d ", d[i]);
	}
	
	return 0;
}
