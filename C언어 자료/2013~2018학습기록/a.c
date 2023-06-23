#include <stdio.h>
#include <stdlib.h>
int k=0;
void display();
void display2();
int fn(int, int); 
int a[10][10]={0,};//결과 
int b[10][10]={0,};// 
int c[10][10]={0,};//방문 
int main(int argc, char *argv[]) {
	int i, j;
	srand(time(NULL));
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			a[i][j]=rand() % 2;
			printf("%d ", a[i][j]);
			b[i][j]=a[i][j];
		}
		printf("\n");
	}
	for(i=0;i<10;i++) 
	{
		for(j=0;j<10;j++)
		{
			c[i][j]=fn(i, j);
			k=0;
		}
	}
	display();
	display2();
	return 0;
}
int fn(int i, int j)
{
	if(i>=0 && i<10 && j>=0 && j<10)
	{
		if(b[i][j]==1)
		{
			k++;
			b[i][j]=9;
			if(b[i-1][j]!=9) fn(i-1, j);
			if(b[i][j-1]!=9) fn(i, j-1);
			if(b[i+1][j]!=9) fn(i+1, j);
			if(b[i][j+1]!=9) fn(i, j+1);
		}
		else
		{
			return 0;
		}
	}
	c[i][j]=k;
	return k;
}
void display()
{
	printf("\n");
	int i, j;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
//	return 0;
}
void display2()
{
	printf("\n");
	int i, j;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
//	return 0;
}
