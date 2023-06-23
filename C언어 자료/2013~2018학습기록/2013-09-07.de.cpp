#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, j;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10;j++)
		{
			if(j % 6==3)
			printf("¡×");
			else if (i)
			printf("¢¯¡»¥¸");
			else
			printf("¡à");
		}
		printf("\n");
	}
	return 0;
}
