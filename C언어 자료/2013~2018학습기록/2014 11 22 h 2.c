#include <stdio.h>
#include <stdlib.h>


int main() {
	struct student{
		int id;
		int x;
		int y;
	};
	struct student st1, st2;
	st1.id = 1;
	st1.x = 10;
	st1.y = 100;
	
	st2.id=2;
	st2.x=20;
	st2.y=200;
	printf("%d %d %d\n", st1.id, st1.x, st1.y);
	printf("%d %d %d\n", st2.id, st2.x, st2.y);
	return 0;
}
