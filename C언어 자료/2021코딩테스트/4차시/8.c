#include <stdio.h>

int main() {
    int height;
    int i, j;
    printf("height? ");
    scanf("%d", &height);
    for(i=1;i<=height;i++){
        for(j=0;j<height-i;j++){
            printf(" ");
        }
        for(j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}