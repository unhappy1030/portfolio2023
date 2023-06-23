#include<stdio.h>
#include<string.h>

int main() {
    char firstname[30];
    char lastname[30];
    char age_group[4][30] = {"[Youth]","[Junior]","[Senior]","[Silver]"}; 
    int birthyear, age;
    char result[90];
    printf("Firstname? ");
    scanf("%s", firstname);
    printf("Lastname? ");
    scanf("%s", lastname);
    printf("Birthyear? ");
    scanf("%d", &birthyear);
    age = 2021 - birthyear + 1;
    if(age < 20){
        strcat(result, age_group[0]);
    }
    else if(age >=20 && age < 40){
        strcat(result, age_group[1]);
    }
    else if(age >=40 && age < 65){
        strcat(result, age_group[2]);
    }
    else{
        strcat(result, age_group[3]);
    }
    strcat(result, " ");
    strcat(result, lastname);
    strcat(result, " ");
    strcat(result, firstname);
    printf("결과 : %s", result);
    return 0;
}