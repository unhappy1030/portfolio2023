#include<stdio.h>

int main() {
    int start = 1, end = 100, input, count = 0, num;
    while(1){
        num = (end + start) / 2;
        if(end - start == 1){
            num = end;
        }
        printf("How about %d? (try more : 1, try less : 2, right : 0) ", num);
        scanf("%d", &input);
        count++;
        if(input == 1){
            start = num + 1;
        }
        else if(input == 2){
            end = num - 1;
        }
        else if(input == 0){
            printf("%d tried.", count);
            break;
        }

    }
    return 0;
}