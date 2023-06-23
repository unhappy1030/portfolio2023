#include <stdio.h>

int main(){
    int persons, count1=0, count2=0, count3=0;
    float min, max, degree, sum=0, avg;
    int i;
    printf("인원수를 입력하시오 > \n");
    scanf("%d", &persons);
    for(i=1;i<=persons;i++){
        printf("%d번 분의 체온을 입력하시오 > \n", i);
        scanf("%f", &degree);
        if(i == 1){
            min =  degree;
            max = degree;
        }
        else if(degree > max){
            max = degree;
        }
        else if(degree < min){
            min = degree;
        }
        if(degree < 35){
            count1++;
        }else if(degree >= 35 && degree <= 37.5){
            count2++;
        }else if(degree > 37.5){
            count3++;
        }
        sum += degree;
    }
    if(sum == 0 || persons == 0){
        avg = 0;
    }
    else{
        avg = sum / persons;
    }
    printf("\n정상체온 : %d명, 발열의심 : %d명, 저체온의심 : %d명\n", count2, count3, count1);
    printf("최고체온 : %.1f, 최저체온 : %.1f, 평균체온 : %.1f", max, min, avg);
    return 0;
}