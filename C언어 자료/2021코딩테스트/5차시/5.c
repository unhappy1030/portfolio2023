#include<stdio.h>

int main() {
    int monthdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int month, day;           // 입력받은 월, 일
    int day_count=0;            // 1년 중 날 수
    int i;                    // 반복문을 위한 변수
    printf("Month? ");
    scanf("%d", &month);
    printf("Day? ");
    scanf("%d", &day);
    if((month < 1 || month > 12) || (day < 1 || day > monthdays[month-1])){
        printf("잘못 입력하셨습니다.");
    }
    else{
        for(i=0;i<12;i++){
            if(i < month - 1){
                day_count+=monthdays[i];
            }
            else{
                break;
            }
        }
        day_count += day;
        printf("이 날짜는 1년 중 %d번째 날에 해당", day_count);
    }
    return 0;
}