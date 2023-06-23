#include <stdio.h>

int main() {
    int height, weight;
    float bmi;
    int people = 1;
    int count = 0;
    while(people < 6){
        printf("%d번째 사람의 신장(cm)과 체중(kg)을 입력하시오. ", people);
        scanf("%d%d", &height, & weight);
        bmi = weight / (height * 0.01 * height * 0.01);
        if(bmi > 25){
            count++;
        }
        people++;
    }
    printf("비만인 사람은 총 %d명입니다.", count);
    return 0;
}