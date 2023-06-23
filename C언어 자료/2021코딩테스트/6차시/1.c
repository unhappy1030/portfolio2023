#include <stdio.h>
#include <string.h>

int main(){
    char userid[30];         
    char password[30]; 
    char name[30];
    int i, len;
    printf("User Id? ");
    scanf("%s", userid);
    while(1){
        printf("Password? ");
        scanf("%s", password);
        if(strlen(password) < 3){
            printf("-> 3글자 이상 입력할 것\n");
        }
        else{
            break;
        }
    }
    printf("User Name? ");
    scanf("%s", name);
    printf("\nUser Id: %s\n", userid);
    printf("Password: %c%c", password[0], password[1]);
    len = strlen(password);
    for(i = 0; i < len - 2; i++){
        printf("*");
    }
    printf("\n");
    printf("User Name: %s", name);
    return 0;
}