#include <stdio.h>

int main(){
    int number=1;
    while(number!=0){
        printf("number? ");
        scanf("%d",&number);
        if(number<0){
            printf("negative number\n");
        }
        else if(number>0){
            printf("positive integer\n");
        }
    }
    return 0;
}