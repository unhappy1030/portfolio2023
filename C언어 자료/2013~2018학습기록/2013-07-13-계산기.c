#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int i, j, t, k=0;
	int a[100]={0,};
	int b[100]={0,};
	scanf("%d", &t);
	for(i=-101;i<101;i++)
	{
		for(j=-101;j<101;j++)
		{
			if((i*i)+(j*j)==t)
			{
				a[k]=i;
				b[k]=j;
				k++;
			}
		}
	}
	if(k==0)
	{
			printf("-1");	
	}
	if(k>=1)
	{
		for(i=0;i<k+1;i++)
		{
			printf("%d %d\n", a[i], b[i]);
		}	
	}
	return 0;
}
