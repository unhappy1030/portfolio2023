#include <stdio.h>

int main() {
    int num=50, num2 = 50,input, count = 0;
    while(1){
        printf("How about %d? (try more : 1, try less : 2, right : 0) ", num);
        scanf("%d", &input);
        count++;
        if(num2 > 1){
            num2 = num2 / 2;
        }
        if(input == 0){
            printf("%d tried.", count);
            break;
        }
        else if (input == 1){
            num += num2;
        }
        else if (input == 2){
            num -= num2;
        }
    }
    return 0;
}