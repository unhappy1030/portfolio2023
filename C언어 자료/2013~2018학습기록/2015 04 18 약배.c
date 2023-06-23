#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j=0, k=0;
	int a=1<=a&&a>=40;
	int c=1<=c&&c>=100;
	int *b;
	scanf(" %d", &a);
	b=(int *)malloc(sizeof(int)*a);
	for(i=0;i<a;i++){
		scanf(" %d", &b[i]);
	}
	scanf(" %d", &c);
	for(i=0;i<a;i++)
	{
		if((c % b[i])==0)
		{
			j+=b[i];
		}
		if((b[i] % c)==0)
		{
			k+=b[i];
		}
	}
	printf("%d\n%d", j, k);
		
		
	
}
