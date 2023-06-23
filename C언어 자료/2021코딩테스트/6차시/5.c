#include<stdio.h>
#include<string.h>

int main() {
    char birthdate[8];
    int sum=0, i;
    printf("Enter your birthdate >> ");
    scanf("%s", birthdate);
    for(i=0;i<4;i++){
        sum += birthdate[i] - '0';
    }
    sum += (birthdate[4] - '0') * 10 + (birthdate[5] - '0');
    sum += (birthdate[6] - '0') * 10 + (birthdate[7] - '0');
    printf("Your birthdate number is %d.", sum);
    return 0;
}