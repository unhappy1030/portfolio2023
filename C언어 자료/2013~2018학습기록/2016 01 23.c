#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t=0, n, m, a, x=0, y=0;;
	int s[3000]={0,};
	int b[3001]={0,};
	int c[3000]={0,};
	scanf("%d%d%d", &n,&m, &a);
	for(i=0;i<m;i++)
	{
		scanf("%d", &s[i]);
	}
	for(i=0;i<m;i++)
	{
		b[s[i]]++;
		if(s[i]==a)
		{
			b[s[i]]++;
			x=1;
		} 
	}
	if(x==1)
	{
		for(i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				t++;
				c[y]=i;
				y++;
			}
		}
	}
	if(x==0)
	{
		t=n-1;
		for(i=0;i<n;i++)
		{
			if(n-(i+1)>=a)
			{
				c[i]=i+2;
			}
			else
			{
				c[i]=i+1;
			}
			
		}
	}
	
	if(x==1)
	{
		t=t-1;
		printf("%d\n", t);
		for(i=1;i<t+1;i++)
		{
			printf("%d ", c[i]);
		}
	}
	if(x==0)
	{
		printf("%d\n", t);
		for(i=0;i<t;i++)
		{
			printf("%d ", c[i]);
		}
	}
	return 0;
}
