#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NN 5

int main(){
	int i, j, input[NN]={10,20,30,40,0}; 
	srand(time(NULL));
	int a[10]={0,};
	
	for(i=0; i<NN;i++)
	 input[i] = (rand() % 100);
	for(i=0;i<NN;i++)
	{
		if(input[i]>=1)
		{
			j = input[i]/10;
			a[j]++;
		}
	}
	for(i = 0; i < 10; i++)
	{
		if(a[i]>0)
		printf("%d : %d\n", i, a[i]);
	}
	return 0;
}
