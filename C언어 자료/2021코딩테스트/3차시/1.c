#include <stdio.h>

int main() {
    int count_all;
    int count_young = 0;
    int birth_year;
    int age;
    int i;
    printf("가족 인원수? ");
    scanf("%d", &count_all);
    for(i=0; i < count_all; i++){
        printf("Birth year? ");
        scanf("%d", &birth_year);
        age = 2021 - birth_year + 1;
        if(age < 20){
            count_young++;
        }
    }
    printf("가족들 중 미성년자는 모두 %d명입니다.", count_young);
    return 0;
}