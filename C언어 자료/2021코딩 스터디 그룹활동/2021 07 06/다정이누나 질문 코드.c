#include <stdio.h>

int main(void) {
    int jumsu[5][3];
    int sum[5];
    float average[5];

    for(int i=0; i<5; i++){
        printf("%d번 학생 국어, 영어, 수학 점수? ",i+1);
        scanf("%d %d %d", &jumsu[i][0],&jumsu[i][1],&jumsu[i][2]);
        sum[i]= jumsu[i][0]+jumsu[i][1]+jumsu[i][2];
        average[i]= sum[i]/3.0;
    }


    for(int j=0; j<5; j++){
        printf("%d번 학생의 총점은 %d, 평균은 %.1f",j+1,sum[j],average[j]);
        printf("\n");
    }

    return 0;
}