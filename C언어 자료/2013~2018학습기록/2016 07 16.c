#include <stdio.h>
#include <stdlib.h>
int t, c[25]={0,}, k=0;
int a[25][25]={0,};
int jar(int, int);

int main(int argc, char *argv[]) {
	int i, j;
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			k=0;
			jar(i, j);
		}
	}
	
	printf("\n%d", jar(0, 0));
	printf("\n");
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
int jar(int i, int j)
{
	printf("\n%d", k);
	if(i>=0 && i<=t && j>=0 && j<=t)
	{
//		if ((a[i][j]==0 || a[i][j]>1)&& t>=j)
//		{
//			jar(i ,j+1);
//		}
//		else if((a[i][j]==0 || a[i][j]>1) && t>=i)
//		{
//			jar(i+1 ,j);
//		}	
//		else 
		if(a[i][j]==1)
		{
			k++;
			a[i][j]==2;
			if(a[i][j+1]==1)
			{
				jar(i, j+1);
			} 
			else if(a[i][j-1]==1)
			{
				jar(i, j-1);
			}
			else if(a[i+1][j]==1)
			{
				jar(i+1, j);
			}
			else if(a[i-1][j]==1)
			{
				jar(i-1, j);
			}
		}
	}
	return k;
}
