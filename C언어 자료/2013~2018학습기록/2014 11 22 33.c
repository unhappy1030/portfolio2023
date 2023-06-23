#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, k, in;
	int a[100]={0,};
	srand(time(NULL));
	FILE *fin=fopen("input.txt","r");
	FILE *fout=fopen("output.txt","w");
	fscanf(fin,"%d", &in);
	for(i=0;i<in;i++)
	{
		fscanf(fin,"%d", &a[i]);
		fprintf(fout,"%d\n", a[i]);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
