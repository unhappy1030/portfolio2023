#include<stdio.h>
#include<stdlib.h>
int f(int);
int i, z=0;
int a=0, b=1, c=0, d;
int main() {
	int t;
	scanf("%d", &t);
	printf("%d", f(t));
	return 0;
}
int f(int k)
{
	if(k==1)
	{
		return 1;
	}
	if(k!=1)
	{
		if(k==z)
		{
			return a;
		}
		a=b+c;
		c=b;
		b=a;
		d=k;
		if(k!=z)
		{
			return f(d);
		}
		z++;
	}
}
