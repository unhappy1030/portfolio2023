#include <stdio.h>
#include <stdlib.h>


int main() {
	char *p;
	static char a[] = "abc";
	int i;
	p=a;
	for(i=0;i<3;i++)
	{
		printf("*(p + %d)%c \n", i ,*(p + i));
		printf("p[%d],%c \n",i , p[i]);
		printf("a[%d],%c \n ",i, *(a + i));
	}
	return 0;
}
