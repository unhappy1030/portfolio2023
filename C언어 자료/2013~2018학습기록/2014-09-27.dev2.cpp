#define ZZ 2
#define RR 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input();
void process();
void output();
int i, j, k;
int a[ZZ][RR] = {3,6,9,8,5,2};
int b[ZZ][RR] = {9,8,7,6,5,4};
int c[ZZ][RR] = {0,};

int main() {
	srand(time(NULL));
	input(); process(); output();
	return 0;
}
void input()
{
	for(i=0;i<ZZ;i++)
	{
		for(j=0;j<RR;j++)
		{
			a[i][j]=rand() % 10;
			b[i][j]=rand() % 10;
			printf("%d %d\n", a[i][j], b[i][j]);
		}
	}
	printf("input");
}
void process()
{
	for(i=0;i<ZZ;i++)
	{
		for(j=0;j<RR;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
}
void output()
{
	for(i=0;i<ZZ;i++)
	{
		for(j=0;j<RR;j++)
		{
			printf("%d ", c[i][j]);
		}
	}
	
//	printf("/n%d ", c[i][j]);
}
