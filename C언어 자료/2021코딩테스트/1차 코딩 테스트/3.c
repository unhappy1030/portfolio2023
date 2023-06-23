#include<stdio.h>

int main() {
    int length, height;
    int i, j, count_mid=0, num=0;
    printf("길이를 입력하시오 > ");
    scanf("%d", &length);
    num = length;
    height = length * 3 - 2;
    for(i=1;i<=height;i++){
        if(height - num != 0){
            for(j=0;j<(height-num) / 2;j++){
                printf(" ");
            }
        }
        for(j=0;j<num;j++){
            printf("#");
        }
        if(i < length){
            num+=2;
        }else if(i >= height - (length - 1) ){
            num-=2;
        }
        printf("\n");
    }
    return 0;
}