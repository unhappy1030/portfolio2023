#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Z 5
void process();
void printm();
void init();

int i, j;
int m[Z][Z]={0,};

int main(){
	init();
	process();
	printm();

	return 0;
}
void process()
{
	for(i=1;i<Z;i++)
	{
		for(j=1;j<Z;j++)
		{
			m[i][j]=m[i][j-1]+m[i-1][j];
		}
	}
}
void printm()
{
	for(i=0;i<Z;i++)
	{
		for(j=0;j<Z;j++)
		{
			printf("%6d", m[i][j]);
		}printf("\n");
	}
}
void init()
{
	for(i=0;i<Z;i++)
	{
		m[0][i]=1; 
		m[i][0]=1; 
	}
}

