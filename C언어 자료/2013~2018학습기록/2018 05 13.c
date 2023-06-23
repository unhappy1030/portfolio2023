#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, m;
	int a[100]={0,};
	int line[100][2]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d", &a[i]);
		line[i][0]=i+1;
	}
	for(i=0;i<t;i++)
	{
		m=i-a[i];
		for(j=0;j<t;j++)
		{
			if(line[j][1] >= m)
			{
				line[j][1]++;
			}
		}
		line[i][1]=m;
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			if(line[j][1] == i)
			{
				printf("%d ", line[j][0]);
			}
		}
	}
	return 0;
}
