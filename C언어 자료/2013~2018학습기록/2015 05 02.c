#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, a, b=1000, c, m=0, n=0;
	int k[4]={0,};
	int l[4]={0,};
	/*FILE *fin = fopen("input.txt","r");
	FILE *fout = fopen("output.txt","w");*/
	scanf("%d %d", &i, &j);
	for(a=0;a<4;a++)
	{
		k[a]=i/b;
		c=k[a] * b;
		i=i-c;
		l[a]=j/b;
		c=l[a] * b;
		j=j-c;
		b=b/10;
		if(k[a]-l[a]==0)
		{
			m++;
		}
	}
	for(a=0;a<4;a++)
	{
		for(b=0;b<4;b++)
		{
			if(k[a]-l[b]==0)
			{
				n++;
			}
		}
	}
	printf("%dA%dB", m, n-m);
	/*fclose(fin);
	fclose(fout);*/
	return 0;
}	
