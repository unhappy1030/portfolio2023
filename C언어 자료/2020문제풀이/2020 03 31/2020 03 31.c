#include <stdio.h>
#include <stdlib.h>
int i, j, n, k=0, cp, m;
int t[7]={0,};
int d[5]={1, 1, 1, 1, 1};
int rotate(int);
void check(int);
void count(int);
void output(void);
int main() {
	scanf("%d%d", &n, &m);
	t[1]=n;
	check(m);
	output();
	rotate(0);
	return 0;
}
int rotate(int a){
	if(a==0)
	{
		count(a);
		t[d[a]]++;
		return rotate(a+1);
	}
	if(a!=0)
	{
		if(a<n-1)
		{
			if(k==1)
			{
				count(a);
				t[d[a]]++;
				return rotate(a+1);
			}
			else
			{
				t[d[a]]++;
				return rotate(a+1);
			}
		}
		if(a==n-1)
		{
			if(k==1)
			{
				count(a);
				t[d[a]]++;
				a=0;
				check(m);
				output();
				if(t[6]==n)
				{
					return 0;
				}
				for(i=1;i<7;i++)
				{
					t[i]=0;
				}
				return rotate(a);
			}
			else
			{
				t[d[a]]++;
				a=0;
				check(m);
				output();
				if(t[6]==n)
				{
					return 0;
				}
				for(i=1;i<7;i++)
				{
					t[i]=0;
				}
				return rotate(a);
			}
		}
	}
}
void count(int b){
	if(d[b]<6)
	{
		d[b]++;
		k=0;
	}
	else if(d[b]==6)
	{
		d[b]=1;
		k=1;
	}
}
void output(void){
	if(cp==0)
	{
		for(i=n-1;i>=0;i--)
		{
			printf("%d ", d[i]);
		}
		printf("\n");
	}
}
void check(int c)
{
	if(c==1)
	{
		cp=0;
	}
	else if(c==2)
	{
		
	}
	else if(c==3)
	{
		cp=0;
		for(i=1;i<7;i++)
		{
			if(t[i]>1)
			{
				cp=1;
			}
		}
	}
}
