#include<stdio.h>
#include<stdlib.h>

int main() {
	int j=0;
	char i;
	for(i=1;i<127;i++)
	{
		j++;
		printf(" %d::%c\n", j, i);
	}
	return 0;
}
