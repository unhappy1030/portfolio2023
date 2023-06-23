#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *fin = fopen("input.txt","r");
	int a, b;
	fscanf(fin, "%d %d", &a, &b);
	printf("%d %d", a, b);
	return 0;
}
