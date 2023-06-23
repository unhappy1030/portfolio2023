#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, k, a, b, c, n, ma, mb, mc;
	FILE *fin = fopen("input.txt","r");
	FILE *fout = fopen("output.txt","w");
	a=1<=a&&a>=100000000;
	b=1<=b&&b>=100000000;
	c=1<=c&&c>=100000000;
	fscanf(fin,"%d %d %d", &a, &b, &c);
	for(i=0;i<3;i++)
	{
		if(a>b)
		{
			k=a;
			a=b;
			b=k;
		}
		if(b>c)
		{
			k=b;
			c=b;
			b=k;
		}
	}
	for(i=c;i>0;i--)
	{
		ma=a%i;
		mb=b%i;
		mc=c%i;
		if(ma==mb&&mb==mc)
		{
			n=i;
			break;
		}
	}
	fprintf(fout,"%d", n);
	fclose(fin);
	fclose(fout);
	return 0;
}
