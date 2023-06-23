#include <stdio.h>
#include <stdlib.h>


int main() {
	typedef int ii;
	typedef struct student{
		int id;
		int x;
		int y;
	}ss;
//	struct student st1, st2;
	ss st1[3], st2;
	
	ii i;
	
	for(i=0;i<3;i++)
	{
	st1[i].id = 1*i;
	st1[i].x = 10*i;
	st1[i].y = 100*i;
	}
/*	st2.id=2;
	st2.x=20;
	st2.y=200;*/
	
	for(i=0;i<3;i++)
	{
		printf("%d %d %d\n", st1[i].id, st1[i].x, st1[i].y);
	}
//	printf("%d %d %d\n", st2.id, st2.x, st2.y);
	return 0;
}
