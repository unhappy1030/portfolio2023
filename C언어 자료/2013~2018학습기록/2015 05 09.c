#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, l=0, m=0, n, o=0;
	int k[100]={0,};
	for(i=0;i<100;i++)
	{
		k[i]=k[i]<=1&&k[i]>=100;
	}
	scanf("%d", &j);
	for(i=0;i<j;i++)
	{
		scanf("%d", &k[i]);
	}
	for(i=0;i<j;i++)
	{
		l=0;
		if(k[i]==1)
		{
			l++;
		}
		if(k[i-1]==1)
		{
			l=l+o;
		}
		if(k[i+1]==0)
		{
			o=0;
		}
		if(k[i+1]==1)
		{
			o=l;
		}
		/*printf("o:%d\n", o);
		printf("l:%d\n", l);
		printf("m:%d\n", m);*/
		m=m+l;
		
	}
	printf("%d", m);
	return 0;
}
