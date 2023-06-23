#include <stdio.h>

int main() {
    int length;
    int i, j;
    printf("정사각형의 크기를 입력하시오. ");
    scanf("%d", &length);
    for(i=0;i<length;i++){
        for(j=0;j<length;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}