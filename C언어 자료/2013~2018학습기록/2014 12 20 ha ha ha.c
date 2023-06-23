#include<stdio.h>
#include<stdlib.h>

int main(){
	typedef struct pencilCase{
		int nx;
		int ny;
	}PC;
	typedef struct bag
	{
		int x;
		int y;
		PC* n;
	}BAG;
	BAG* pb;
	printf("%d\n", sizeof(int));
	PC *n = malloc(sizeof(PC));
//	BAG b1={0, 1,{2, 3}};
	printf("1");
	BAG b2;
	b2.x = 5;b2.y = 6;b2.n->nx = 7;b2.n->ny = 8;
	printf("2");
	printf("%d %d %d %d\n", b2.x, b2.y, b2.n->nx, b2.n->ny);
//	pb = &b2;
//	printf("%d %d %d %d\n", pb->x, pb->y, pb->n.nx, pb->n.ny);
	return 0;
}
