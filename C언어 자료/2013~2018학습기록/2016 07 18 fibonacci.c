#include<stdio.h>
#include<stdlib.h>
int f(int);
int i, z=0;
char a[10]={0,};
int b[10]={0,};
int c[10]={0,};
int d[10]={0,};
int main() {
	int t;
	b[9]=1;
	scanf("%d", &t);
	printf("%d", f(t));
	/*for(i=6;i<10;i++)
	{
		printf("%c", a[9-i]);
	}*/
	//4printf("%s", a);
	return 0;
}
int f(int k)
{
	if(k==1 || k==2)
	{
		return 1;
	}
	if(k!=1 && k!=2)
	{
		for(i=0;i<10;i++)
		{
			d[9-i]=b[9-i]+c[9-i];
			c[9-i]=b[9-i];
			b[9-i]=d[9-i];
			if(d[9-i]>=10)
			{
				d[9-i]-=10;
				d[8-i]++;
			}
			if(b[9-i]>=10)
			{
				b[9-i]-=10;
				b[8-i]++;
			}
			if(c[9-i]>=10)
			{
				c[9-i]-=10;
				c[8-i]++;
			}
		}
		for(i=0;i<10;i++)
		{
			a[9-i]=d[9-i]+48;
		}
		if(k!=z)
		{
			return f(k-1)+f(k-2);
		}
	}
	z++;
}
