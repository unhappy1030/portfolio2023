#include <stdio.h>
#include <stdlib.h>
int cheeze(int a, int b)
{
	
}

int main(int argc, char *argv[]) {
	int i, j, x, y, t=0, k=0, c=0;
	int a[4][4]={0,};
	scanf("%d%d", &x, &y);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++) 
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	while(1)
	{
		c=0;
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++) 
			{
				if(a[i][j]==1)
				{
					if(a[i-1][j]==0 || a[i][j-1]==0 || a[i+1][j]==0 || a[i][j+1]==0)
					{
						a[i][j]==0;
						c++;
					}
					else
					{
						continue;
					}
				}	
			}
		}
		for(i=0;i<x;i++)
		{
			for(j=0;j<y;j++) 
			{
				if(a[i][j]!=0)
				{
					k++;
				}
			}
		}
		if(k==0)
		{
			break;
		}
		t++;
			
	}
	printf("%d\n%d", t, c);
	return 0;
}
