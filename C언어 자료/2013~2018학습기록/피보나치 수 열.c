#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, t, k=1, x=0;
	int a[100]={0,};
	scanf("%d", &t);
	if(t==1)
	{
		printf("%d", k);
	}
	if(t!=1)
	{
		t=t-1;
		a[1]++;
		for(i=2;i<t+2;i++)
		{
			a[i]=a[i-1]+a[i-2];
			x=a[i];
		}
		printf("%d", x);
	}
	return 0;
}
