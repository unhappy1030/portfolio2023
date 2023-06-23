#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, k, t=0, x=0;
	int a[15][2]={0,};
	scanf("%d", &k);
	if(k>6)
	{
		t=6;
		for(i=0;i<20;i++)
		{
			
			a[i][x+1]=t;
			a[i][x]=k-t;
			t--;
			if(a[i][x]>6)
			{
				break;
			}
			printf("%d %d\n", a[i][x], a[i][x+1]);
		}
	}
	if(k<=6)
	{
		t=1;
		for(i=0;i<20;i++)
		{
			a[i][x+1]=k-t;
			a[i][x]=t;
			t++;
			if(a[i][x+1]==0)
			{
				break;
			}
			printf("%d %d\n", a[i][x], a[i][x+1]);
		}
	}
	return 0;
}
