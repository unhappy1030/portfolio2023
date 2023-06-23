#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,k,in;
	int a[100][100] = {0,};
	srand(time(NULL));
	FILE *fin = fopen("input.txt","r");
	FILE *fout = fopen("output.txt","w");
	fscanf(fin,"%d",&in);
	for(i = 0; i < in; i++)
	{
		fscanf(fin,"%d %d",&a[i][0],&a[i][1]);
	}
	for(i = 0; i < in; i++)
	{
		k=0;
		for(j =0; j < in; j++)
		{
			k = k + a[i][j];
			//a[i][j] = rand() % 10;
		}
		fprintf(fout,"%d\n", k);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
