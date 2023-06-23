#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, t, res=0, x=0;
	int a[6]={0,};
	int b[6]={0,};
	int n[6]={500, 100, 50, 10, 5, 1};
	scanf("%d", &t);
	for(i=0;i<6;i++)
	{
		scanf("%d", &a[i]);
	}
	i=5;
	while(1)
	{
		x=a[i]*n[i];
		if(a[i]!=0)
		{
			if((t-x)%n[i-1]!=0)
			{
				a[i]--;
				continue;
			}
			b[i]=a[i];
			t=t-x;
			res=res+a[i];
			a[i]=0;
		}
		if(t<=0)
		{
			break;
		}
		i--;
	}
	printf("%d\n", res);
	for(i=0;i<6;i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
