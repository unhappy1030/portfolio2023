#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j=0, t, k=0, x=0, y=0;
	int a[1000]={0,};
	int b[1000][2]={0,};
	int c[1000]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d", &a[i], &b[i][0], &b[i][1]);
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(b[j][1]>b[j+1][1])
			{
				k=b[j][1];
				b[j][1]=b[j+1][1];
				b[j+1][1]=k;
				k=b[j][0];
				b[j][0]=b[j+1][0];
				b[j+1][0]=k;
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(b[x][1]<=b[i][0])
		{
			x=i;
			c[y+1]=a[i];
			y++;
		}
	}
	printf("%d\n", y-1);
	for(i=0;i<y;i++)
	{
		printf("%d ", c[i+1]);
	}
	return 0;
}
