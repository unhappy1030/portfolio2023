#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, n=0;
	int a[2]={0,};
	scanf("%d%d", &a[0], &a[1]);
	for(i=0;i<a[0];i++)
	{
		for(j=0;j<a[1];j++)
		{
			n++;
			printf("%d ", n);
		}
		printf("\n");
	} 
	return 0;
}
