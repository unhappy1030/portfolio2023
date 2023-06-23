#include <stdio.h>
#include <stdlib.h>

int compare ( const void *pa, const void *pb ) {
    const int *a = *(const int **)pa;
    const int *b = *(const int **)pb;
    if(a[0] == b[0])
        return a[1] - b[1];
    else
        return a[0] - b[0];
}
int main(void){
    int **a;
	int i, j=0, cnt, tr, k, t, c=0, r=0;
	int b[10001]={0,};
	scanf("%d%d%d", &cnt, &tr, &k);
    a = malloc(k * sizeof(int*));
    for (i = 0; i < k; i++){
        a[i] = malloc(3 * sizeof(int));
        scanf("%d%d%d", &a[i][1], &a[i][0], &a[i][2]);
    }
    qsort(a, k, sizeof a[0], compare);
    for (i = 0; i < k; i++)
    {
    	t=0;
    	t=a[i][0];
    	a[i][0]=a[i][1];
    	a[i][1]=t;
    }
    for (i = 0; i < k; i++)
    {
    	c=0;
    	for(j=0;j<cnt;j++)
    	{
    		if(a[i][0]-1<= j && a[i][1]-1 > j)
    		{
    			if(tr<b[j]+a[i][2] && b[j]!=tr)
	    		{
	    			a[i][2]=tr-b[j];
	    		}
    		}
    	}
    	for(j=0;j<cnt;j++)
    	{
    		if(a[i][0]-1<= j && a[i][1]-1 > j)
			{
				b[j]=b[j]+a[i][2];
			}		
    	}
    	r=r+a[i][2];
    	for(j=0;j<cnt;j++)
    	{
    		if(b[j]>tr)
    		{
    			c=1;
    		}
    	}
    	if(c==1)
    	{
    		for(j=0;j<cnt;j++)
	    	{
	    		if(a[i][0]-1<= j && a[i][1]-1> j)
				{
					b[j]=b[j]-a[i][2];
				}		
	    	}
	    	r=r-a[i][2];
    	}
    }
    printf("%d", r);
    return 0;
}
