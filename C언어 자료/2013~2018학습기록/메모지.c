#include <stdio.h>
#include <stdlib.h>
int k=0;
void display();
int fn(int, int); 
int a[10][10]={0,};//결과 
int b[10][10]={0,};// 
int c[10][10]={0,};//방문 
int main(int argc, char *argv[]) {
	int i, j, x;
	srand(time(NULL));
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			a[i][j]=rand() % 2;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<10;i++) 
	{
		for(j=0;j<10;j++)
		{
			b[i][j]=fn(i, j);
		}
	}
	display();
	return 0;
}
int fn(int i, int j)
{
	if(i>=0 && i<10 && j>=0 && j<10)
	{
		if(a[i][j]==1 || a[i][j]==2)
		{
			k++;
			c[i][j]=9;
			if(a[i+2][j]!=9) fn(i-1, j);
			if(a[i+2][j]!=9) fn(i+1, j);
			if(a[i][j+2]!=9) fn(i, j+1);
			if(a[i][j+2]!=9) fn(i, j-1);
		}
		else
		{
			return 0;
		}
		b[i][j]=k;	
	}
	return k;
		
}
void display()
{
	printf("\n");
	int i, j, k=0;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
//	return 0;
}
