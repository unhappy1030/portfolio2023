#include <stdio.h>
#define PLATE_MAX 50

struct{
	int space[50];
}pole[3];

void printTower(){
	int i, j, t;
	scanf("%d", &t);
	for(i=0;i<3;i++)
	{
		printf("%d : ", i);
		if(i!=0)
		{
			printf("x ");
		}
		else
			for(j=0;j<PLATE_MAX;j++)
			{
				if(j>=t)
				{
					break;
				}
				else
				{
					pole[i].space[j]=t-j;
					printf("%d ", pole[i].space[j]);
				}	
			}
		printf("\n");
	}
}
int main() {
	printTower();
	return 0;
}
