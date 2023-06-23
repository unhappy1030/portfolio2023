#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, n=0, t=1;
	int a[2]={0,};
	int map[100][100]={0,};
	scanf("%d%d", &a[0], &a[1]);
	for(i=0;i<a[0];i++)
	{
		if(t==0)
		{
			for(j=0;j<a[1];j++)
			{
				map[i][j]=n;
				n++;
				printf("%d ", n);
			}
			printf("\n");
			t=1;
			continue;
		}
		if(t==1)
		{
			for(j=a[1];j>=0;j--)
			{
				map[i][j]=n;
				n++;
				printf("%d ", n);
			}
			printf("\n");
			t=0;
			continue;
		}
	} 
	for(i=0;i<a[0];i++)
	{
		for(j=0;j<a[1];j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
