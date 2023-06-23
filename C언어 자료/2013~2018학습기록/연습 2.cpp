#include<stdio.h>
#include<stdlib.h>

int main() {
	int i=0, j, t=0, k=1, r=0, x=0;
	int a[100][2];
	while(1)
	{
		scanf("%d%d", &a[i][0], a[i][1]);
		if(a[i][0]==0 && a[i][0]==0)
		{
			break;
		}
		i++;
	}
	i=0;
	while(1)
	{
		t=a[i][0]-1;
		for(j=0;j<t;j++)
		{
			r=(t-i)*2;
			x=k*4;
			if(x+r==a[i][1])
			{
				
			}
			k++;
		}
		if(a[i][0] > 1000 || a[i][1] > 4000)
		{
			printf("INPUT ERROR!");
			continue;
		}
		i++;
	}
	return 0;
}
