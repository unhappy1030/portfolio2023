#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ZZ 5

int main() {
	int i, j, k;
	int a[5]={25, 5, 1, 3, 13};
	/*srand(time(NULL));
	for(i=0;i<ZZ;i++)
	{
		a[i]=rand() % 100000;
	} */
	for(i=1;i<5;i++)
	{
		for(j=5;j>=i;j--)
		{
			if(a[j-1]>a[j])
			{
				k = a[j-1];
				a[j-1]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf(" %d ", a[i]);
	}
	return 0;
}
