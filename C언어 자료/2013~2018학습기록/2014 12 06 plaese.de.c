#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, f;
	FILE *fin=fopen("input.txt", "r");
	FILE *fout=fopen("output.txt", "w");
	
	fscanf(fin,"%d", &f);
	printf(" %d", f);
	fprintf(fout," %d", f);
	fclose(fin);
	fclose(fout);
	return 0;
}
