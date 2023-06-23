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
	int i, j=0, v=0,cnt, tr, k, sp;
	int b[10000]={0,};
	int n=0, r=0;
	scanf("%d%d%d", &cnt, &tr, &k);
    a = malloc(k * sizeof(int*));
    for (i = 0; i < k; i++){
        a[i] = malloc(3 * sizeof(int));
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    }
    qsort(a, k, sizeof a[0], compare);
	sp=tr;
    for(i=1;i<cnt+1;i++)
    {
		for(v=0;v<n+1;v++)
		{
			if(b[v]==i)
			{
				sp=sp+a[b[v]][2];
				r=r+a[b[v]][2];
			}
		}
		if(sp==0)
		{
			continue;
		}
		printf("%d\n", sp);
    	for(j=0;j<k;j++)
    	{
    		if(a[j][0]==i)
    		{
    			
   				if(sp!=0 && sp>=a[j][2])
   				{
   					sp=sp-a[j][2];
   					b[n]=j;
    				n++;
   				}
   				if(sp!=0 && sp<a[j][2])
   				{
   					a[j][2]=sp;
   					sp=sp-a[j][2];
   					b[n]=j;
    				n++;
   				}
    		}
    		else
    		{
    			continue;
    		}
    	}
    	
    }
    printf("%d", r);
    return 0;
}
