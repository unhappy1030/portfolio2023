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
    int **b;
    int **c;
    int i, t, r=0, f, d, n, k=0;
    scanf("%d", &t);
    a = malloc(t * sizeof(int*));
    b = malloc(t * sizeof(int*));
    c = malloc(t * sizeof(int*));
    for (i = 0; i < t; i++){
        a[i] = malloc(2 * sizeof(int));
        b[i] = malloc(2 * sizeof(int));
        c[i] = malloc(2 * sizeof(int));
        scanf("%d%d%d%d", &b[i][0], &b[i][1], &c[i][0], &c[i][1]);
        if(b[i][0]==1)
        {
        	b[i][0]=0;
        }
        if(b[i][0]==2)
        {
        	b[i][0]=31;
        }
        if(b[i][0]==3)
        {
        	b[i][0]=59;
        }
        if(b[i][0]==4)
        {
        	b[i][0]=90;
        }
        if(b[i][0]==5)
        {
        	b[i][0]=120;
      }
        if(b[i][0]==6)
        {
        	b[i][0]=151;
        }
        if(b[i][0]==7)
        {
        	b[i][0]=181;
        }
        if(b[i][0]==8)
        {
        	b[i][0]=212;
        }
        if(b[i][0]==9)
        {
        	b[i][0]=243;
        }
        if(b[i][0]==10)
        {
        	b[i][0]=273;
        }
        if(b[i][0]==11)
        {
        	b[i][0]=304;
        }
        if(b[i][0]==12)
        {
        	b[i][0]=334;
        }
        if(c[i][0]==1)
        {
        	c[i][0]=0;
        }
        if(c[i][0]==2)
        {
        	c[i][0]=31;
        }
        if(c[i][0]==3)
        {
        	c[i][0]=59;
        }
        if(c[i][0]==4)
        {
        	c[i][0]=90;
        }
        if(c[i][0]==5)
        {
        	c[i][0]=120;
        }
        if(c[i][0]==6)
        {
        	c[i][0]=151;
        }
        if(c[i][0]==7)
        {
        	c[i][0]=181;
        }
        if(c[i][0]==8)
        {
        	c[i][0]=212;
        }
        if(c[i][0]==9)
        {
        	c[i][0]=243;
        }
        if(c[i][0]==10)
        {
        	c[i][0]=273;
        }
        if(c[i][0]==11)
        {
        	c[i][0]=304;
        }
        if(c[i][0]==12)
        {
        	c[i][0]=334;
        }
        a[i][0]=b[i][0]+b[i][1];
        a[i][1]=c[i][0]+c[i][1];
    }
	qsort(a, t, sizeof a[0], compare);
	f=60;
	d=0;
	while(1)
	{
		n=0;
		for(i=0;i<t;i++)
	    {
	    	if(a[i][0]<=f)
	    	{
	    		if(a[i][1]>d)
	    		{
	    			d=a[i][1];
	    			n=1;
	    			k=i;
	    		}
	    	}		
		}
		f=d;
		a[k][0]=0;
		a[k][1]=0;
		r++;
		if(f-1>=334)
		{
			printf("%d", r);
			break;
		}
		if(n==0)
		{
			printf("0");
			break;
		}
	}
    return 0;
}
