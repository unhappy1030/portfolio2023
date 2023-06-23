#include<stdio.h>
#include<stdlib.h>

int main(){
	typedef unsigned int UI;
	typedef struct point
	{
		int x;
		int y;
	}PP;
	int i;
	UI a=7;
	PP p1={0, 0};
	PP p2={7, 7};
	PP pa[3]={{1,1},{2,2},{3,3}};
	PP* pp1=NULL;
	pp1=&p1;
	printf("%d %d\n", p1.x, p1.y);
	printf("%d %d\n", p2.x, p2.y);
	for(i=0;i<3;i++)
	{
		printf("%d %d\n", pa[i].x,pa[i].y);
	}
	printf("%d %d\n", pp1->x, pp1->y);
	return 0;
}
