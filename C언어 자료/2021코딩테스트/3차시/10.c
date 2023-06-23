#include <stdio.h>

int main() {
    int number;
    int max_num, min_num;
    int check_init=0;
    while(1){
        printf("0부터 100 사이의 숫자를 입력 ");
        scanf("%d", &number);
        if(check_init == 0){
            max_num = number;
            min_num = number;
            check_init = 1;
            continue;
        }
        if(number < 0 || number > 100){
            break;
        }
        else{
            if(number > max_num){
                max_num = number;
            }
            if(number < min_num){
                min_num = number;
            }
        }
    }
    printf("입력된 숫자들 중 가장 큰수는 %d이고,\n가장 작은 수는 %d입니다.", max_num, min_num);
    return 0;
}