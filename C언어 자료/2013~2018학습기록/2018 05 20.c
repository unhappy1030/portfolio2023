#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, k=0, m;
	int a[9]={100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1};
	int b[9]={0,};
	int r[2]={0,};
	k=9;
	while(1)
	{
		scanf("%d", &t);
		if(t==0)
		{
			break;
		}
		for(i=0;i<9;i++)
		{
			if(t / a[i] == 0)
			{
				continue;
			}
			else
			{
				b[i]=t / a[i];
				t=t - (b[i] * a[i]);
			}
			r[1]=r[1] + b[i];
		}
		for(i=0;i<9;i++)
		{
			if(b[i] == 0)
			{
				r[0]=r[0] + (a[k] * b[i]);
			}
			else
			{
				r[0]=r[0] / a[k];
				break;
			}
			k--;
		}
		printf("%d %d\n", r[0], r[1]);
		k=9;
	}
	return 0;
}
