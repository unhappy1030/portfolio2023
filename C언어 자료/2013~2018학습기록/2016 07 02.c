#include <stdio.h>
#include <stdlib.h>
int k=0;
void display();
int fn(int, int); 
int a[10][10]={0,};
int main(int argc, char *argv[]) {
	int i, j;
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
		for(j=0;j<10;j++)
		{	
		k = 0;
		printf("%d", fn(i, j));
		
		display();

		}

	return 0;
}
int fn(int i, int j)
{
	if(i>=0 && i<10 && j>=0 && j<10)
	{
		if(a[i][j]==1)
		{
			k++;
			a[i][j]=9;
			if(a[i+1][j]!=9) fn(i+1, j);
			if(a[i][j+1]!=9) fn(i, j+1);
			if(a[i-1][j]!=9) fn(i-1, j);
			if(a[i][j-1]!=9) fn(i, j-1);
		}else 
			return k;
	}
	else
	
		return 0;
	
		
}
void display()
{
	printf("\n");
	int i, j, k=0;
	for(i=0;i<10;i++) {
		for(j=0;j<10;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
