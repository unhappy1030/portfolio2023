#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, l=500, y=0, z;
	int a[500][3]={0,};
	int t[3]={0,};
	int x[500]={0,};
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
	}
	for(i=1;i<5;i++)
	{
		for(j=5;j>=i;j--)
		{
			if(a[j-1][2]>a[j][2])
			{
				t[0] = a[j-1][0];
				t[1] = a[j-1][1];
				t[2] = a[j-1][2];
				a[j-1][0]=a[j][0];
				a[j-1][1]=a[j][1];
				a[j-1][2]=a[j][2];
				a[j][0]=t[0];
				a[j][1]=t[1];
				a[j][2]=t[2];
			}
		}
	}
/*	for(i=0;i<k;i++)
	{
		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
	}*/
	for(i=0;i<k;i++)
	{
		for(j=1;j<k-1;j++)
		{
			x[y]=a[i][0];
			z=a[i][2];
			if(z<a[j][1])
			{
				z=a[j][2];
				y++;
				x[y]=a[j][0];
			}
		}
	}
	printf("%d\n", y+1);
	for(i=0;i<y;i++)
	{
		printf("%d ", x[i]);
	}
	return 0;
}
