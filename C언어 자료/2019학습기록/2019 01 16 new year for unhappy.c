#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j=2, t, r=0, k;
	int a[5000]={0,};
	int b[5000]={0,};
	scanf("%d", &t);
	for(i=0; i < t; i++)
	{
		j=2;
		scanf("%d", &a[i]);
		b[i]=a[i];
		while(1)
		{
			if(a[i] % j == 0)
			{
				a[i] = a[i] / j;
				if(j > r)
				{
					r = j;
					k = i;
				}
			}
			else
			{
				j++;
			}
			if(j > a[i])
			{
				break;
			}
		}
	}
	printf("%d", b[k]);
	return 0;
}
