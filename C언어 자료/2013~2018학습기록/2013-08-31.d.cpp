#include<stdio.h>
#include<stdlib.h>

int main (){
	int i = 7;
	long float a, b;
	while(i != 0)
	{
		printf("please input two floats");
		scanf("%f %f", &a, &b);
		printf("*==> 1, +==> 2, -==>3, /==>4, %==>5");
		scanf("%d", &i);
		if( i == 1 )
		{
			printf("%f \n", a * b);
		}
		else if( i == 2 )
		{
			printf("%lf \n", 15/300);
		}
		else if( i == 3 )
		{
			printf("%f \n", a - b);
		}
		else if( i == 4)
		{
			printf("%f \n", a / b);
		}
		else if( i == 5)
		{
			printf("%f \n", a / b);
		}
		else
		{
			printf("¤»¤»¤» ´Ù½ÃÇØ!!!");
		}	
	}	
	printf("End!!");	
	return 0;
}
