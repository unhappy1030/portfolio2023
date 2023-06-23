#include <stdio.h>

int main() {
    int dan;
    int i;
    while(1){
        printf("출력하고 싶은 구구단의 단 수?(2~9) ");
        scanf("%d", &dan);
        if(dan <= 1 || dan >=10){
            printf("잘못 입력하였습니다.\n");
            continue;
        }
        else{
            for(i=1;i<=9;i++){
                printf("%d x %d = %d\n", dan, i, dan * i);
            }
            break;
        }
    }
    return 0;
}