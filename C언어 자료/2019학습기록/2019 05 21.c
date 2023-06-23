#include <stdio.h>
#include <stdlib.h>
int n;
int main(int argc, char *argv[]) {
	FILE *in=fopen("in.txt","r");
	FILE *out=fopen("out.txt","w");
	fscanf(in,"%d", &n);
	fprintf(out,"%d\n", n);
	return 0;
}
