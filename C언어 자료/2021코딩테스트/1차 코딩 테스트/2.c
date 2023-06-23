#include <stdio.h>

int main(){
    int persons, count1=0, count2=0, count3=0;
    float min=35, max=0, degree, sum=0, avg;
    int i;
    printf("인원수를 입력하시오 > \n");
    scanf("%d", &persons);
    for(i=1;i<=persons;i++){
        printf("%d번 분의 체온을 입력하시오 > \n", i);
        scanf("%f", &degree);
        if(degree < 35){
            if(degree < min){
                min = degree;
            }
            count1++;
        }else if(degree >= 35 && degree <= 37.5){
            sum += degree;
            count2++;
        }else if(degree > 37.5){
            if(degree > max){
                max = degree;
            }
            count3++;
        }
    }
    if(min >= 35){
        min = 0;
    }
    if(sum == 0 || count2 == 0){
        avg = 0;
    }else{
        avg = sum / count2;
    }
    printf("정상체온 : %d명(평균 %.1f도), 발열의심 : %d명(최고 %.1f도), 저체온의심 : %d명(최저 %.1f도)\n", count2, avg, count3, max, count1, min);
    return 0;
}