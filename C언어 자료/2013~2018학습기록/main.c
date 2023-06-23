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
    int number = 10;
    int i;
    int **array;

    array = malloc(number * sizeof(int*));
    for (i = 0; i < number; i++){
        array[i] = malloc(2 * sizeof(int));
        array[i][0] = rand()%20;
        array[i][1] = rand()%20;
    }
    for(i = 0;i < number;++i)
        printf("%2d, %2d\n", array[i][0], array[i][1]);

    printf("\n");


    qsort(array,10,4, compare);

    for(i = 0;i < number;++i)
        printf("%2d, %2d\n", array[i][0], array[i][1]);

    return 0;
}
