#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int i, j, in, r, sum = 0;
	int a[1000] = {0,};
	srand(time(NULL));
	FILE* fin = fopen("input.txt","r");
	FILE* fout = fopen("output.txt","w");
	fscanf(fin,"%d",&in);
	for(i = 0; i < in; i++)
	{
		r = rand() % 10;
		fprintf(fout,"%d", r);
		sum = sum + r;
	}
	fprintf(fout,"%d",sum);
	fclose(fin);
	fclose(fout);
	return 0;
}
