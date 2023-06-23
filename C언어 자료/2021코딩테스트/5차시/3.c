#include <stdio.h>

int main() {
    float score[10];      // 심사점수
    float max, min;       // 가장 큰 점수, 가장 작은 점수
    float total=0;          // 점수 총 합계
    float average;        // 평균점수
    int i;                // 반복문을 위한 변수  
    for(i = 0; i < 10; i++){
        printf("%d번 심사점수? ", i+1);
        scanf("%f", &score[i]);
        if(i == 0){
            min=score[i];
            max=score[i];
            total+=score[i];
        }
        else{
            if(score[i] > max){
                max = score[i];
            }
            if(score[i] < min){
                min = score[i];
            }
            total+=score[i];
        }
    }
    total -= max + min;
    average = total / 8;
    printf("가장 큰 점수와 가장 작은 점수를 제외한 8개의 점수에 대한 평균은 %.1f입니다.", average);
    return 0;
}