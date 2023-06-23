#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, k=0 ,t=1 ,f , s ,d=0, r=0;
	int a[2]={1 , 1}, b[2]={1, 2};
	int c[2]={0,};
	scanf("%d%d", &d, &r);
	if(d>4)
	{
		
		for(i=0;i<d-4;i++)
		{
			for(j=0;j<2;j++)
			{
				c[j]=b[j];
				b[j]=a[j]+b[j];
				a[j]=c[j];
			}
		}
		for(i=0;i<1000;i++)
		{
			for(j=0;j<1000;j++)
			{
				if(j>i)
				{
					if((b[k]*i)+(b[t]*j)==r)
					{
						f=i;
						s=j;
						break;
					}
				}
				
				
			}
		}
		
	}
	if(d==4)
	{
		for(i=0;i<1000;i++)
		{
			for(j=0;j<1000;j++)
			{
				if(j>i)
				{
					if((b[k]*i)+(b[t]*j)==r)
					{
						f=i;
						s=j;
						break;
					}
				}
				
			}
		}
	}
	if(d==3)
	{
		for(i=0;i<1000;i++)
		{
			for(j=0;j<1000;j++)
			{
				if(j>i)
				{
					if((a[k]*i)+(a[t]*j)==r)
					{
						f=i;
						s=j;
						break;
					}
				}
				
			}
		}
	}
	printf("%d %d", f, s);	
	return 0;
}
