#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k, o;
	int a[101]={0,};
	while(1)
	{
		scanf("%d%d", &k, &o);
		for(i=1;i<101;i++)
		{
			printf("%d ", a[i]);
			if(i>0)
			{
				if(i%20==0)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
		printf("\n");
		if(k==1)
		{
			for(i=1;i<101;i++)
			{
				if(i>0)
				{
					if(o%i==0)
					{
						if(a[i]==0)
						{
							a[i]=1;	
						}
						else if(a[i]==1)
						{
							a[i]=0;	
						}	
					}	
				}
				
			}
		}
		if(k==2)
		{
			for(i=1;i<101;i++)
			{
				if(i>0)
				{	if(i%o==0)
					{
						if(a[i]==0)
						{
							a[i]=1;	
						}
						else if(a[i]==1)
						{
							a[i]=0;	
						}
					}
				}
			}
		}
		if((k||o)==0)
		{
			break;
		}
	}
	return 0;
}
