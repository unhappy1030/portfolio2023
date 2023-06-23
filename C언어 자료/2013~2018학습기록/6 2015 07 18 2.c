#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k, t;
	int a[15][2]={0,};
	scanf("%d", &k);
	if(k>6)
	{
		for(i=0;i<20;i++)
		{
			t=6;
			a[i][1]=t;
			a[i][0]=k-t;
			t--;
			if(a[i][0]>6)
			{
				break;
			}
			printf("%d %d\n", a[i][0], a[i][1]);
		}
	}
	if(k<=6)
	{
		for(i=0;i<20;i++)
		{
			t=6;
			a[i][1]=t;
			a[i][0]=k-t;
			if(a[i][0]>6)
			{
				break;
			}
			printf("%d %d\n", &a[i][0], &a[i][1]);
		}
	}
	return 0;
}
