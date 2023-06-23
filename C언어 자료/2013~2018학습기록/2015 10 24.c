#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, n;
	int arr[100][100]={0,};
	scanf("%d", &n);
	int num=1;
	int m=n;
	int x=0, y=-1;
	while(m>0)
	{
		for (i = 1; i <= m; i++)
		{
			y++;
			arr[x][y] = num++;
		}
		m--;
		for (i = 1; i <= m; i++)
		{
			x++;
			arr[x][y] = num++;
		}
		for (i = 1; i <= m; i++)
		{
			y--;
			arr[x][y] = num++;
		}
		m--;
		for (i = 1; i <= m; i++)
		{
			x--;
			arr[x][y] = num++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
