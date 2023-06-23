#include<stdio.h>
#include<stdlib.h>

main() {
	int i=1;
	printf("Scanf Test \n");
	while(i!=0) 
	{
		printf("input number plz...\n");
		scanf("%d", &i);
		printf("sqare value : %d \n", (i*9/5)+32);
		printf("exit : 0 \n");
	}
	return 0;
}
