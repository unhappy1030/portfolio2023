#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, in, max=0, min=0;
	int a[10]={0,};
	FILE* fin=fopen("input.txt","r");
	FILE* fout=fopen("output.txt","w");
	fscanf(fin,"%d", &in);
	for(i=0;i<in;i++)
	{
		fscanf(fin, "%d", &a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<in;i++)
	{
		if(min > a[i])
		{
			min=a[i];
		}
		if(max < a[i])
		{
			max = a[i];
		}
	}
	fprintf(fout,"%d", max - min);
	fclose(fin);
	fclose(fout);
	
	return 0;
}
