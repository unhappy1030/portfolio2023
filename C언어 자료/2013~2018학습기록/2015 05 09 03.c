#include<stdio.h>

int main() {
	int a=300, b=60, c=10, i, j, k, l=0, m=0, n=0, o, t;

	scanf("%d", &t);

	for(o=0;o<t;o++)
	{
		if(a<=t)
		{
			i=t%a;
			l++;
		}
	}
	for(o=0;o<t;o++)
	{
		if(b<=t)
		{
			j=i%b;
			m++;
		}
	}
	for(o=0;o<t;o++)
	{
		if(c<=t)
		{
			k=j%c;
			n++;
		}
	}
	printf("A : %d, B : %d, C : %d", l, m, n);
	return 0;
}
