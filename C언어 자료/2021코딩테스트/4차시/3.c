#include <stdio.h>

int main() {
    int mode;
    int i, j;
    int n=0, count = 0;
    printf("구구단의 출력모드(1: 홀수단, 2: 짝수단)를 입력하세요. ");
    scanf("%d", &mode);
    if(mode == 1){
        n = 1;
    }
    for(i = 1; i <= 4; i++){
        count = 0;
        for(j = 1; j <= 9; j++){
            count++;
            printf("%d X %d = %2d    ", (2 * i) + n, j, ((2 * i) + n) * j);
            if(count % 3 == 0){
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}