#include <stdio.h>

int main() {
    int height;
    int blank;
    int i, j;
    printf("height? ");
    scanf("%d", &height);
    printf("blank? ");
    scanf("%d", &blank);
    for(i=1;i<=height;i++){
        for(j=0;j<height+blank-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}