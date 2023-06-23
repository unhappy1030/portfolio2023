#include <stdio.h>

int main() {
    int number;
    int count=0;
    int totalsum=0;
    float average;
    while(1){
        printf("0초과의 숫자를 입력하세요 ");
        scanf("%d", &number);
        if(number <= 0){
            break;
        }
        else{
            totalsum+=number;
            count++;
        }
    }
    average = (float)totalsum / (float)count;
    printf("입력한 %d개의 숫자들의 합계는 %d이고, 평균 값은 %.1f입니다.", count, totalsum, average);
    return 0;
}