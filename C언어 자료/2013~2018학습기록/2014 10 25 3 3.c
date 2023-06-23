#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *fin = fopen("input.txt","r");
	FILE *fout = fopen("output.txt","w");
	int a, b;
	fscanf(fin, "%d %d", &a, &b);
	printf("%d %d", a, b);
	fprintf(fout,"%d\n", a + b);
	fclose(fin);
	fclose(fout);
	return 0;
}
