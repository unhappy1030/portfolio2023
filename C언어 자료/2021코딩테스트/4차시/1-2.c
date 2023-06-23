#include<stdio.h>

int main() {
    int start = 1, end = 100, input_data, count=0, term=0, show=50, check=0;
    while(1){
        printf("How about %d? (try more : 1, try less : 2, right : 0) ", show);
        scanf("%d", &input_data);
        count++;
        if(input_data == 0){
            printf("%d tried.", count);
            break;
        }
        else if(input_data == 1){
            check = 1;
            show++;
            start = show;
            term = end - start;
            show = show + term / 2;
        }
        else if(input_data == 2){
            show--;
            end = show;
            if(check == 0){
                term = end - start + 1;
            }
            else{
                term = end - start;
            }
            show = show - term / 2;
        }
    }
    return 0;
}