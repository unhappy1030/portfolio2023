#include<stdio.h>

int main(){
	int i, sum;
	sum=0;
	for(i=0;i<=20;i=i+2)
	{
		sum=sum+i;
	}
	printf("%d", sum);
	return 0;
}
