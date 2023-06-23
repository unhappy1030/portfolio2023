#include<stdio.h>
#include<stdlib.h>

main(){
	int i, j, k, x, y;
	char a[4]={0,};
	for(i=0;i<16;i++)
	{
		for(j=0;j<16;j++)
		{
			k=((3<=i)&&(i<=12) && (3<=j)&&(j<=12)) &&
			((5!=i)&&(i!=10) && (5!=j)&&(j!=10))? 1 : 0;			
			printf(" %d", k);
		}
		printf("\n");
	}
	return 0;
} 
