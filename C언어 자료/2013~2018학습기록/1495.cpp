#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, t, k=1;
	int w=0, x=0, y=0, z=0;
	int b=0, c=0;
	int a[100][100]={0,}; 
	scanf("%d", &t);
	k=2;
	a[0][0]=1;
	for(i=0;i<t;i++)
	{
		if(b+1>t-1)
		{
			c++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
		else
		{
			b++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
		while(b!=0)
		{
			if(c+1==t)
			{
				break;
			}
			b--;
			c++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
		if(c+1==t)
		{
			b++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
		else
		{
			c++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
		while(c!=0)
		{
			if(b+1==t)
			{
				break;
			}
			c--;
			b++;
			a[b][c]=k;
			k++;
			if(k>t*t)
			{
				break;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
