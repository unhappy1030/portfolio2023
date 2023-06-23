#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void input();
void process();
void output();
int i, j, k, colsum=0, rowsum=0;
int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
int b[4]={0,};
int c[4]={0,};

int main() {
	input();
	process();
	output();
	return 0;
}
void input()
{
	printf("input\n");
}
void process()
{
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				colsum+=a[i][j];
			}
			if(i==3-j)
			{
				rowsum+=a[i][j];
			}
		//	c[0]=a[i][0]+c[0];
		//	c[1]=a[i][1]+c[1];
			
		}
	}
	printf("process\n");
}
void output()
{
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ", a[i][j]);
		}printf("\n");
	}printf("\n");

	printf("%d ", colsum);
	
	printf("\n");
	
	printf("%d ", rowsum);
	
	printf("output\n");
}
