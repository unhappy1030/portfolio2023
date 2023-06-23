
#include<stdio.h>
#include<stdlib.h>
int i;
void f(int b[10]);
int main() {
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	f(a);
	return 0;
}
f(int b[10])
{
	for(i=0;i<10;i++)
	{
		printf(" %d", b[i]);
	}
	return 0;
}
