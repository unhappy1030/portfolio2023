#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char a[100];
	int k, StrLength(char*);
	scanf("%s", &a);
	k = StrLength(a);
	printf("%c %d", a[0], k);
	return 0;
}
