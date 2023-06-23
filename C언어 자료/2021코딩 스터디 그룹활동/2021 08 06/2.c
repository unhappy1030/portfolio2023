#include <stdio.h>

int main(){
    float Height,Base,width;
    int text;
    char answer;
    printf("Base = ");
    scanf("%f",&Base);
    printf("Height = ");
    scanf("%f",&Height);
    width = (Base * Height)/2;
    printf("Triangle width = %.1f\n", width);
    printf("Continue? ");
    scanf(" %c",&answer);
    if("answer==Y"||"answer==y"){
        printf("Base = ");
        scanf("%f",&Base);
        printf("Height = ");
        scanf("%f",&Height);
        width = (Base * Height)/2;
        printf("Triangle width = %.1f\n", width);
        printf("Continue? ");
        scanf(" %c",&answer);
    }
    else if("answer==N"||"answer==n"){
        return 0;
    }
}