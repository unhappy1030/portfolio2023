#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j, t, m, x, k;
	int a[6]={0,};
	int b[6]={0,};
	int n[6]={500, 100, 50, 10, 5, 1};
	int r[6]={0,};
	scanf("%d", &t);
	for(i=0;i<6;i++)
	{
		scanf("%d", &a[i]);
		if(t<n[i])
		{
			a[i]=0;
		}
		b[i]=a[i];
	}
	i=5;
	m=t;
	while(1)
	{
		k=0;
		m=t;
		while(0<=i)
		{
			if(b[i]==0)
			{
				i--;
				continue;
			}
			x=b[i]*n[i];
			if(m/x!=0)
			{
				r[i]=b[i];
				m=m-x;
				k=k+b[i];
				i--;
			}
			if(m/x==0)
			{
				b[i]--;
			}
		}
		i=5;
		if(m!=0)
		{
			if(a[i]==0)
			{
				i--;
			}
			if(a[i]!=0)
			{
				a[i]--;
			}
			for(j=0;j<6;j++)
			{
				b[j]=a[j];
				r[j]=0;
			}
		}
		if(m==0)
		{
			printf("%d\n", k);
			for(j=0;j<6;j++)
			{
				printf("%d ", r[j]);
			}
			break;
		}
	}
	return 0;
}
