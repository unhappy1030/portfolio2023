#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, f;
	int a[40]={0,};
	FILE *fin=fopen("input.txt", "r");
	FILE *fout=fopen("output.txt", "w");
	a[0]=1;
	a[1]=1;
/*	for(i=2;i<=40;i++)
	{
		a[i] = a[i-1]+a[i-2];
		printf("%d : %d \n", i, a[i]);
	}*/
	fscanf(fin,"%d", &f);
	for(i=2;i<=f-1;i++)
	{
		a[i] = a[i-1]+a[i-2];
		printf("%d : %d \n", i, a[i]);
	}
	
	printf("%d", a[f-1]);
	fprintf(fout," %d", a[f-1]);
	fclose(fin);
	fclose(fout);
	return 0;
}
