#include<stdio.h>

int main() {
    int input_num, first_num, second_num, num, count=0;
    scanf("%d", &input_num);
    num=input_num;
    while(1){
        first_num=num % 10;
        if(num - first_num != 0) second_num = (num - first_num) / 10;
        else second_num = 0;
        num=(first_num * 10) + ((second_num + first_num) % 10);
        count++;
        if(num == input_num) break;
    }
    printf("%d", count);
    return 0;
}