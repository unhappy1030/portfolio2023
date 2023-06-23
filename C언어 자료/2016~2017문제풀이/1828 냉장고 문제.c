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
    int **array;
    int number;
    int i, s, e, r=1;
	scanf("%d", &number);
    array = malloc(number * sizeof(int*));
    for (i = 0; i < number; i++){
        array[i] = malloc(2 * sizeof(int));
		scanf("%d%d", &array[i][0], &array[i][1]);
    }
    qsort(array, number, sizeof array[0], compare);
	for(i=0;i<number;i++)
	{
		if(i==0)
		{
			s=array[i][0];
			e=array[i][1];
		}
		if(i>0)
		{
			if(e<array[i][0])
			{
				r++;
				s=array[i][0];
				e=array[i][1];
			}
			if(s<array[i][0] && e>array[i][1])
			{
				s=array[i][0];
				e=array[i][1];
			}
		}
	}
	printf("%d", r);
    return 0;
}
