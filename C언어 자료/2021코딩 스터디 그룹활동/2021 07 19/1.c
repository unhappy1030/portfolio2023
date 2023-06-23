#include<stdio.h>

int main(){
    int i;
    double score[10], max, min, sum=0, avg;
    sum = 0;
    for(i=0;i<10;i++){
        scanf("%lf", &score[i]);
        printf("\n score : %.3lf\n", score[i]);
        if(i == 0){
            max = score[i];
            min = score[i];
            sum += score[i];
            continue;
        }
        if(score[i] > max){
            max = score[i];
        }
        if(score[i] < min){
            min = score[i];
        }
        sum += score[i];
    }
    printf("\n sum : %.3lf\n", sum);
    avg = ((sum - (max + min))) / 8;
    printf("\n avg : %.1lf", avg);
    return 0;
}