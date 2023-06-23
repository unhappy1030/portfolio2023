#include <stdio.h>
#include <stdlib.h>
int i, j, k=1;
int t[3]={0,};
int a[100][100]={0,};
int b[100][2]={0,};
int c[100][2]={0,};

int main(int argc, char *argv[]) {
	scanf("%d%d%d", &t[0], &t[1], &t[2]);
	for(i=0;i<t[2];i++)
	{
		scanf("%d%d%d%d", &b[i][0], &b[i][1], &c[i][0], &c[i][1]);
	}
	map(0);
	for(i=0;i<t[0];i++)
	{
		for(j=0;j<t[1];j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
