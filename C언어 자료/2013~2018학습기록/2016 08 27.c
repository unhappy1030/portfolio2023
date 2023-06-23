#include <stdio.h>
#include <stdlib.h>
int i, j, t, l=100001, x=1, m=0;
int nt(int);
int a[100][100]={0,};
int b[100]={0,};
int main(int argc, char *argv[]) {
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	while(1)
	{
		for(i=0;i<t;i++)
		{
			for(j=0;j<t;j++)
			{
				if(a[i][j]<l)
				{
					if(b[i]!=1||b[j]!=1)
					{
						l=a[i][j];
						b[i]=1;
						b[j]=1;
						m+=l;
					}
				}
			}
		}
	}
	for(i=0;i<t;i++)
	{
		if(b[i]==1)
		{
			x++;
		}
		if(x==t)
		{
			break;
		}
	}
	printf("%d", m);
	return 0;
}
