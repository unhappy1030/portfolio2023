#include<stdio.h>
#include<string.h>

int main() {
    char username[5][20]={"kim", "lee", "park", "hong", "choi"}; 
    char password[5][20]={"1111", "1234", "3456", "3535", "7777"};
    char un[20], pwd[20];
    int i, check[2]={0,}, idx=0;
    printf("아이디를 입력하시오. ");
    scanf("%s", un);
    printf("비밀번호를 입력하시오. ");
    scanf("%s", pwd);
    for(i=0;i<5;i++){
        if(strcmp(username[i], un) == 0){
            check[0]=1;
            idx = i;
            break;
        }
    }
    if(check[0] == 1){
        if(strcmp(password[idx], pwd) == 0){
            printf("로그인 성공");
        }
        else{
            printf("아이디는 맞는데 비번이 틀림");
        }
    }
    else{
        printf("그런 아이디가 없음");
    }
    return 0;
}