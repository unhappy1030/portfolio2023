#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t=1, k;
	int a[1000]={0,};
	int b[1000]={0,};
	scanf("%d", &k);
	for(i=0;i<k;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<k;i++)
	{
		t=1;
		for(j=0;j<a[i]-1;j++)
		{
			t=(t*2)+1;
		}
		b[i]=t;
	}
	for(i=0;i<k;i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}
