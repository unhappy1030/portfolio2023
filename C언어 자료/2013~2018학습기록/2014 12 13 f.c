#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, in, c=0;
	unsigned long long f=1;
	FILE* fin=fopen("input.txt","r");
	FILE* fout=fopen("output.txt","w");
	fscanf(fin,"%d", &in);
	for(i=1;i<=in;i++)
	{
		f = f * i;
		printf("%d ", f);
	}
	while(f % 10 ==0)
	{
		c++;
		f=f / 10;
	}
	printf("%d \n", c);
	//fprintf(fout,"%d",);
	fclose(fin);
	fclose(fout);
	
	return 0;
}
