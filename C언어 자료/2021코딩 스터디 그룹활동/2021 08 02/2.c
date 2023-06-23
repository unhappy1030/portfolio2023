#include <stdio.h>

int main(){
    int check = 0;
    char arr[6]={'J', 'U', 'N', 'G', 'O', 'L'}, text;
    scanf("%c", &text);
    for(int i = 0;i<6;i++){
        if(arr[i] == text){
            check = 1;
            printf("%d", i);
        } 
    }
    if(check == 0) printf("none");
    return 0;
}