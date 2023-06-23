#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, k=0;
	int j;
	int a[5]={0,};
	scanf("%d", &j);
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	j=j+1;
	for(i=0;i<5;i++)
	{
		
		a[i]=a[i]+1;
		if(a[i] / j==1)
		{
			if(a[i] % j==0)
			{
				k++;
			}
			
		}
	}
	printf("%d", k);
	return 0;
}
