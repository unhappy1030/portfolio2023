#include <stdio.h>

int main() {
    int rows, columns;
    int number=0;
    int i, j;
    printf("rows? ");
    scanf("%d", &rows);
    printf("columns? ");
    scanf("%d", &columns);
    for(i=0;i<rows;i++){
        number=0;
        for(j=0;j<columns;j++){
            number+=i+1;
            printf("%-3d ", number);
        }
        printf("\n");
    }
    return 0;
}