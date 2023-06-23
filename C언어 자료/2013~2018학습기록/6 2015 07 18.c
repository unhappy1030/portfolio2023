#include<stdio.h>
main() {
	int i;
	char c;
	double d;
	while(1)
	{
		scanf("%d %c %lf", &i, &c, &d);
		printf("%d %c %lf", i*2, c+2, d*2.0);
		if(i==0)break;
	}
	return 0;
}
