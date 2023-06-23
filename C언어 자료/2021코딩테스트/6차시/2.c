#include<stdio.h>
#include<string.h>

int main() {
    char str[100];      // 입력받은 문자열
    char reverse[100];  // 순서를 거꾸로 바꾼 문자열
    int i;
    printf("문자열 입력 ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("역순으로 변환한 문자열은 ");
    for(i = strlen(str)-1; i >= 0; i--){
        printf("%c", str[i]);
    }
    return 0;
}