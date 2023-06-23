#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, k, n=1, w=0;
	int a[100][100]={0,};
	scanf("%d%d", &t, &k);
	if(k==1)
	{
		for(i=0;i<t;i++)
		{
			for(j=0;j<t;j++)
			{
				a[i][j]=n;
			}
			n++;
		}
	}
	else if(k==2)
	{
		for(i=0;i<t;i++)
		{
			if(w==0)
			{
				n=1;
				for(j=0;j<t;j++)
				{
					a[i][j]=n;
					n++;
				}
				w=1;
				continue;
			}
			if(w==1)
			{
				n=t;
				for(j=0;j<t;j++)
				{
					a[i][j]=n;
					n--;
				}
				w=0;
				continue;
			}
		}
	}
	else
	{
		for(i=0;i<t;i++)
		{
			a[0][i]=n;
			a[i][0]=n;
			n++;
		}
		for(i=1;i<t;i++)
		{
			for(j=1;j<t;j++)
			{
				a[i][j]=a[i][0]*a[0][j];
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
