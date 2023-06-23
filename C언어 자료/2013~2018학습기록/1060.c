#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i, j, t, k, r=0, w=0, p=0, m=0, n=0;
	int a[100][100]={0,};
	int c[100]={0,};
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		for(j=0; j<t; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	w=0;
	while(1)
	{
		for(i=0; i<t; i++)
		{
			if(a[w][i] != 0)
			{
				if(k==0)
				{
					k=a[w][i];
				}
				if(k!=0)
				{
					if(k >= a[w][i])
					{
						k=a[w][i];
						n=i;
						a[w][i]=0;
						a[i][w]=0;
						printf(" k%d\n", k);
						for(i=0; i<t; i++)
						{
							for(j=0; j<t; j++)
							{
								printf(" %d", a[i][j]);
							}
							printf("\n");
						}
					}
				}
			}
		}
		m++;
		if(w == c[p])
		{
			r=r+k;
			printf("\t r%d\n", r);
			p++;
			c[p]=n;
			m=0;
//			printf("\n");
		}
		w=c[m];
		if(p+1 == t)
		{
			break;
		}
		k=0;
	}	
	printf("%d", r);
	return 0;
}
