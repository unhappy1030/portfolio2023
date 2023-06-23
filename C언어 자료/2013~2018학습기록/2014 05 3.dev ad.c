#include <stdio.h>
#include <stdlib.h>
void recurse(int i);
int factorial(int i);

int main()
{
	recurse(10);
	printf("%d", factorial(6));
	return 0;
}

int factorial(int i)
{
	if(i<=1)
	return 1;
	
	return i*factorial(i-1);
}

void recurse (int i)
{
	if(i>0)
	{
		recurse(i-1);
		printf("%d", i);
	}
}
