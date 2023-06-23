#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b , i, j;
	for(i=0;i<4;i++)
	{
		scanf("%d %d", &a, &b);
		if(a==0,b==0)
		{
			break;
		}
	}
	while(1)
	{
		if(a>1000&&b>4000)
		{
			printf("input error");
		}
		for(i=0;i<a;i++)
		{
			if((4*i)+2*(a-i)==b)
			{
				printf("%d %d\n", i, a-i);
			}
			else
			{
				j=0;
				printf("%d\n", j);
			}
		}
		
		if(j==0)
			break;
	}
	
	return 0;
}
