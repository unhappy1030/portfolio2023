#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int x = *((int *)a);
	int y = *((int *)b);
	if(x > y) return 1;
	else if(x < y) return -1;
	else return 0;
}

int main(int argc, char *argv[]) {
	int i, k, t, r, y;
	int a[1000]={0,};
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, t, sizeof(int), compare);
	k=0;
	while(1)
	{
		y=k;
		for(i=t;i>=0;i--)
		{
			if(y>=a[i])
			{
				y=y-a[i];
			}
			if(y==0)
			{
				break;
			}
		}
		if(y>0)
		{
			r=k;
			break;
		}
		k++;
	}
	printf("%d", r);
	return 0;
}
