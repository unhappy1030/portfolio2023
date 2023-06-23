#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, j=0, k=0, x=0, t=0;
	int l[20]={0,};
	int a[10]={0,};
	int b[10]={0,};
	int c[10]={0,};
	for(i=0;i<20;i++)
	{
		scanf("%d", &l[i]);
	}
	for(i=0;i<20;i++)
	{
		if(l[i]/100==1)
		{

			t=l[i]-100;
			//printf("t: %d ",t);
			if(0<=t&&t<=9)
			{
				a[0]++;
				
			}
			if(10<=t&&t<=19)
			{
				a[1]++;
				
			}
			if(20<=t&&t<=29)
			{
				a[2]++;
				j++;
			}
			if(30<=t&&t<=39)
			{
				a[3]++;
				j++;
			}
			if(40<=t&&t<=49)
			{
				a[4]++;
				j++;
			}
			if(50<=t&&t<=59)
			{
				a[5]++;
				j++;
			}
			if(60<=t&&t<=69)
			{
				a[6]++;
				j++;
			}
			if(70<=t&&t<=79)
			{
				a[7]++;
				j++;
			}
			if(80<=t)
			{
				a[8]++;
				j++;
			}
		}
		if(l[i]/200==1)
		{
			
			x=l[i]-200;
			//printf("x:%d ",x);
			if(0<=x&&x<=9)
			{
				b[0]++;
				
			}
			if(10<=x&&x<=19)
			{
				b[1]++;
				
			}
			if(20<=x&&x<=29)
			{
				b[2]++;
				k++;
			}
			if(30<=x&&x<=39)
			{
				b[3]++;
				k++;
			}
			if(40<=x&&x<=49)
			{
				b[4]++;
				k++;
			}
			if(50<=x&&x<=59)
			{
				b[5]++;
				k++;
			}
			if(60<=x&&x<=69)
			{
				b[6]++;
				k++;
			}
			if(70<=x&&x<=79)
			{
				b[7]++;
				k++;
			}
			if(80<=x)
			{
				b[8]++;
				k++;
			}
		}
	}
	a[9]=j;
	b[9]=k;
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%d ", c[i]);
	}
	return 0;
}
