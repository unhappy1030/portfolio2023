#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int partition(const void *a, const void *b){
	int temp;
	int _a = *((int *)a);
	int _b = *((int *)b);
	if(_a>_b){
		return 1;
	}
	else if(_a == _b){
		return 0;
	}
	else{
		return-1;
	}
}
int main(){
	int *n;
	int i;
	clock_t st, ed;
	
	srand(time(NULL));
	
	n=(int *)malloc(sizeof(int)*20);
	
	for(i=0;i<20;i++){
		n[i]=rand() % 10;
	}
	st=clock();
	qsort(n, 20, sizeof(int), partition);
	ed=clock();
	printf("ok %lf\n", (double)(ed-st)/CLK_TCK);
	free(n);
	return 0;
}
