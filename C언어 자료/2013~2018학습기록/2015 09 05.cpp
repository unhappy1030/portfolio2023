#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j=0, t;
	char a[50][50]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%s", &a[i]);
	}
	for(i=t-1;i>0;i--)
	{
		for(j=t-1;j>0;j--)
		{
			if(a[i][j]%62==1)
			{
				if(j%2==1)
				{
					if(a[i+1][j]<a[i][j+1])
					{
						a[i][j]=(a[i+1][j]+10)-a[i][j+1]+48;
					}
					else
					{
						a[i][j]=a[i+1][j]-a[i][j+1]+48;
					}
				}
				if(j%2==0)
				{
					if(a[i+1][j-1]<a[i][j-1])
					{
						a[i][j]=(a[i+1][j-1]+10)-a[i][j-1]+48;
					}
					else
					{
						a[i][j]=a[i+1][j-1]-a[i][j-1]+48;
					}
				}
			}
		}	
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
