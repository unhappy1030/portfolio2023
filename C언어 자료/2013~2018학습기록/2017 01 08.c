#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, k, c=0;
	int a[1000][2];
	int r[1000][2];
	i=0;
	while(1)
	{
		scanf("%d%d", &a[i][0], &a[i][1]);
		if(a[i][0]==0 && a[i][1]==0)
		{
			break;
		}
		i++;
	}
	t=i+1;
	for(i=0;i<t;i++)
	{
		j=0;
		if(a[i][0]>1000 || a[i][1]>4000)
		{
			r[i][0]=10000;
		}
		k=a[i][0];
		while(1)
		{
			k=k-j;
			if(k<0 || a[i][0]<j)
			{
				r[i][0]=20000;
				break;
			}
			if(((k*4)+(j*2))==a[i][1])
			{
				r[i][0]=k;
				r[i][0]=j;
				break;
				continue;
			}
			j++;
		}
	}
	for(i=0;i<t;i++)
	{
		if(r[i][0]==10000)
		{
			printf("INPUT ERROR!\n");
			continue;
		}
		if(r[i][0]==20000)
		{
			printf("0\n");
			continue;
		}
		printf("%d %d\n", r[i][0], r[i][1]);
	}
	return 0;
}
