#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, t, k=1, x=0;
	int a[100]={0,};
	scanf("%d", &t);
	a[0]=a[0]+1;
	for(i=0;i<t;i++)
	{
		a[i]=a[i-1]+a[i-2];
		x=a[i];
	}
	printf("%d", x);
	return 0;
}
