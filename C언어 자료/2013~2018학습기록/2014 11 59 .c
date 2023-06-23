#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, x, sum = 0;
	int a[100]={0,};
	double avg = 0, sd=0;
	FILE* fin = fopen("input.txt","r");
	FILE* fout = fopen("output.txt","w");
	fscanf(fin,"%d", &x);
	for(i=0;i<x;i++)
	{
		fscanf(fin, "%d", &a[i]);
	}
	for(i=0;i<x;i++)
	{
		sum=sum+a[i];
	}
	avg = sum / x;
	for(i=0;i<x;i++)
	{
		sd=sd+(avg - a[i])*(avg - a[i]);
	}
	printf("%d\n", sum);
	if((avg-(int)avg)<0.1)
		printf("%.0lf\n", avg);
	else
		printf("%.1lf\n", avg);
	printf("%.1lf\n", avg);
	printf("%.1lf\n", sqrt(sd/x));
	fprintf(fout,"%d\n", sum);
	fprintf(fout,"%.2lf\n", avg);
	fprintf(fout,"%.2lf\n", sqrt(sd/x));
	fclose(fin);
	fclose(fout);
	return 0;
}
