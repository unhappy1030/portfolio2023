#include <stdio.h>
#include <stdlib.h>


int main() {
	int a[3];
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	printf("sum : %d\navg : %d", a[0] + a[1] + a[2], (a[0] + a[1] + a[2]) / 3);
	return 0;
}
