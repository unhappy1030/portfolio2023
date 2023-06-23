#include<stdio.h>
#include<stdlib.h>
	
int main (){
	int i = 5, j = 3;
	while(1)
	
		{
		scanf("%d", &i);
	printf("%d\n", i);
	if(i > 1000)
	{
	 	printf("i>1000\n");
	}
	else if (i > 500)
	{
		printf("i > 500\n");
	}
	else if (i > 100)
	{
		printf("500>=i>100\n");
	}	 
	else
	{	
		printf("100>=i\n");
	}	
		}
	
return 0;	
}
	
	
	

 
