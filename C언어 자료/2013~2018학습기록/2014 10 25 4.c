#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) { 
	FILE *fin = fopen("input.txt","r");
	FILE *fout = fopen("output.txt","w");
	int a, b, c;
	fscanf(fin, "%d %d %d",&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
	fprintf(fout,"%d\n", (a+b+c) / 3);
	fclose(fin);
	fclose(fout);
	return 0;
}
