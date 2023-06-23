#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b)
{
	int x = *((int *)a);
	int y = *((int *)b);
	if(x > y) return 1;
	else if(x < y) return -1;
	else return 0;
}
int f();
int i, j, t, k=1, c=0, r=0, w=0, x=-1;
int a[1000]={0,};
int b[1000]={0,};
int e[1000]={0,};
long long d;
int main(int argc, char *argv[]) {
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, t, sizeof(int), compare);
	while(1)
	{
		for(i=0;i<t;i++)
		{
			if(a[i]>k)
			{
				c=i;
				break;
			}
			b[i] = a[i];
		}
		d = pow(2 , c);
		d = d - 1;
		f(d);
		if(w == -1)
		{
			printf("%d", r);
		}
		k++;
	}
	return 0;
}
int f(int d)
{
	for(i=0;i<2;i++)
	{
		if(i==0)
		{
			return 0 + f(p-1);
		}
		if(i==1)
		{
			return b[x+1] + f(p-1);
		}
	}
}
