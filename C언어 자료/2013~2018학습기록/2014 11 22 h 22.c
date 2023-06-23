#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, j, k, inr, inc;
	int a[10][10]={0,};
	srand(time(NULL));
	FILE *fin=fopen("input.txt","r");
	FILE *fout=fopen("output.txt","w");
	fscanf(fin,"%d %d", &inr, &inc);
	for(i=0;i<inr;i++)
	{
		for(j=0;j<inc;j++)
		{
			fscanf(fin,"%d", &a[i][j]);
			fprintf(fout," %d", a[i][j]);
		}
		fprintf(fout, "\n");
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
