#include <stdio.h>

int main() {
    int family;
    int children, adult, senior;
    int all_children=0, all_adult=0, all_senior=0;
    int i, j;
    printf("전체 가족수는? ");
    scanf("%d", &family);
    for(i=1;i<=family+1;i++){
        if(i == family + 1){
            printf("모든 가족들의 숫자는 다음과 같습니다.\n");
            for(j=0;j<all_children;j++){
                printf("@");
                if(j == all_children - 1){
                  printf(" ");
                }
            }
            for(j=0;j<all_adult;j++){
                printf("#");
                if(j == all_adult - 1){
                  printf(" ");
                }
            }
            for(j=0;j<all_senior;j++){
                printf("$");
            }
        }
        else{
            printf("%d번 가족의 아이, 어른, 노인의 숫자는? ", i);
            scanf("%d%d%d", &children, &adult, &senior);
            all_children += children;
            all_adult += adult;
            all_senior += senior;
            for(j=0;j<children;j++){
                printf("@");
                if(j == children - 1){
                  printf(" ");
                }
            }
            for(j=0;j<adult;j++){
                printf("#");
                if(j == adult - 1){
                  printf(" ");
                }
            }
            for(j=0;j<senior;j++){
                printf("$");
            }
            printf("\n");
        }
    }
    return 0;
}