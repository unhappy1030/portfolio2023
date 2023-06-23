#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j;
	FILE* fin = fopen("input.txt","r");
	FILE* fout = fopen("output.txt","w");
	printf("Hello %d\n", 7);
	fprintf(fout,"Hello %d\n", 7);
	fclose(fin);
	fclose(fout);
	
	return 0;
}
