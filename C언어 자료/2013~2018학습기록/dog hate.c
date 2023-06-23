#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, s, k, t=0;
	int a[100][4]={0,};
	int b[1000][1000]={0,};
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=a[i][0];j<=a[i][2];j++)
		{
			for(s=a[i][3];s<=a[i][1];s++)
			{
				b[j][s]++;
				if(t<b[j][s])
				{
					t=b[j][s];
				}
			}
		}
	}
	printf("%d", t);
	return 0;
}
