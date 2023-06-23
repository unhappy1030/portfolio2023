#include<stdio.h>
#include<string.h>

int main() {
    int i;
    char sh[100], lo[100];
    char names[13][100]={
                            "Global Leadership School",
                            "International Studies, Languages and Literature",
                            "Management and Economics",
                            "Law",
                            "Counseling Psychology and Social Welfare", "Communication Arts",
                            "Spatial Environment System Engineering", "Mechanical and Control Engineering", "Contents Convergence Design",
                            "Life Science",
                            "Computer Science and Electrical Engineering", "Global Entrepreneurship and ICT",
                            "Creative Convergence Education"};
    for(i=0;i<13;i++){
        if(i == 0){
            strcpy(sh, names[i]);
            strcpy(lo, names[i]);
            continue;
        }
        else{
            if(strlen(sh) > strlen(names[i])){
                strcpy(sh, names[i]);
            }
            else if(strlen(lo) < strlen(names[i])){
                strcpy(lo, names[i]);
            }
        }
    }
    printf("가장 긴 학부 이름은 %s\n", lo);
    printf("가장 짧은 학부 이름은 %s 입니다.", sh);
    return 0;
}