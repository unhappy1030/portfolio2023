#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, c=0, t, k=0, o, w;
	int a[100][100]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			c=a[i][j];
		}
		if(c%2==1)
		{
			k++;	
		}
		if(k==1)
		{
			o=i;
			w=j;
		}
	}
	if(k==0)
	{
		printf("OK");
	}
	if(k==1)
	{
		printf("%d",);
	}
	if(k>=2)
	{
		printf("Corrupt");
	}
	
	return 0;
}
