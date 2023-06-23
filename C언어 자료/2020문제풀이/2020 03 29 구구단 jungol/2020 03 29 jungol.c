#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, t;
	int a[2];
	while(1){
		scanf("%d%d", &a[0], &a[1]);
		if(((a[0]>=2) && (a[0]<=9)) && ((a[1]>=2) && (a[1]<=9)))
		{
			if(a[0] > a[1])
			{
				t=a[0]-a[1]+1;
				for(i=1;i<10;i++)
				{
					for(j=0;j<t;j++)
					{
						printf("%d * %d = %2d   ",  a[0]-j, i, (a[0]-j)*i);
					}
					printf("\n");
				}
				break;
			}
			if(a[0] <= a[1])
			{
				t=a[1]-a[0]+1;
				for(i=1;i<10;i++)
				{
					for(j=0;j<t;j++)
					{
						printf("%d * %d = %2d   ",  a[0]+j, i, (a[0]+j)*i);
					}
					printf("\n");
				}
				break;
			}
		}
		else{
			printf("INPUT ERROR!\n");
			continue;
		}
	}
	return 0;
}
