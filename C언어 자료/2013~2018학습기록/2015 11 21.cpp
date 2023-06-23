#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[100][2]={0,};
	int b[100][100]={0,};
	int i, j, k, x, y, r=0, z;
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<10;j++)
		{
			for(int w=0;w<10;w++)
			{
				x=j+a[i][0];
				y=w+a[i][1];
				b[y][x]++;
				if(b[y][x]>=2)
				{
					r++;
				}
			}
		}
	}
	z=k*100;
	r=z-r;
	printf("%d", r);
	return 0;
}
