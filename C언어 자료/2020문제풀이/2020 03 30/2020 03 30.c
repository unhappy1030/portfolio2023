#include <stdio.h>
#include <stdlib.h>
int i, j, n, m;
int t[7]={0,};
int d[5]={0,};
int routine(int);
void output(void);

int main() {
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		d[i]=1;
	}
	//if(m==1)
	{
		output();
		routine(0);
	}
	return 0;
}
int routine(int a){
	if(a<n-1)
	{
		if(d[a+1]<6)
		{
			t[d[a]]++;
			return routine(a+1);
		}
		if(d[a+1]==6)
		{
			if(d[a]<6)
			{
				d[a]++;
				t[d[a]]++;
				return routine(a+1);
			}
			if(d[a]==6)
			{
				d[a]=1;
				t[d[a]]++;
				return routine(a+1);
			}
		}
	}
	if(a==n-1)
	{
		if(d[a]<6)
		{
			d[a]++;
			t[d[a]]++;
			output();
			a=0;
			if(t[6]==n)
			{
				return 0;
			}
			else
			{
				for(i=1;i<7;i++)
				{
					t[i]=0;
				}
				return routine(a);
			}
		}
		if(d[a]==6)
		{
			d[a]=1;
			output();
			a=0;
			for(i=1;i<7;i++)
			{
				t[i]=0;
			}
			return routine(a);
		}
	}
}
void output()
{
	for(i=0;i<n;i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}
