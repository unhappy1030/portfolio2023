#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, e, q;
	int a[1000]={0,};
	scanf("%d %d %d", &k, &e, &q);
	for(i=0;i<k;i++)
	{
		scanf("%d", &a[i]);
	}
	j=(e*e)+(q*q);
	for(i=0;i<k;i++)¤±¤¤¤·¤© 
	{
		if(j>=(a[i]*a[i]))
		{
			printf("DA\n");
		}
		if(j<(a[i] * a[i]))
		{
			printf("NE\n");
		}
	}
	return 0;
}
