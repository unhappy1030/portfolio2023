#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, b, a[5]={0,};
	i=i<=1&&i>=10;
	j=j<=1&&j>=1000;
	scanf("%d %d", &i, &j);
	b=i*j;
	for(k=0;k<5;k++)
	{
		scanf("%d", &a[k]);
	}
	for(k=0;k<5;k++)
	{
		a[k]=a[k]-b;
		printf("%d ",a[k]);
	}
	
	return 0;	
}
