#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, k=35, t=25, x=0;
	for(i=0;i<1000;i++)
	{
		if(k%i==0&&t%i==0)
		{
			x=i;
		}
	}
	printf("%d", x);
	return 0;
}
