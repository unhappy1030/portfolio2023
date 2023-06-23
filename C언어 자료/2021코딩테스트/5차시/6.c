#include<stdio.h>

int main() {
    int jumsu[5][3];            // 5명의 3과목 점수를 저장하고 있는 2차원 배열 
    int sum_student[5]={0,};         // 학생별 총점
    float average_student[5]={0,};   // 학생별 평균
    char grade_table[5]={'A', 'B', 'C', 'D', 'F'};
    char grade[5];              // 학생별 등급
    int sum_class[3]={0,};           // 과목별 총점
    float average_class[3];     // 과목별 평균
    int i, j;                   // 반복문을 위한
    for(i = 0; i < 5; i++){
        printf("%d번 학생 국어, 영어, 수학 점수? ", i+1);
        for(j = 0; j < 3; j++){
            scanf("%d", &jumsu[i][j]);
            sum_student[i]+=jumsu[i][j];
            sum_class[j]+=jumsu[i][j];
        }
    }
    printf("1) 각 과목별 총점과 평균점수\n");
    average_class[0] = (float)sum_class[0] / 5;
    printf("국어 점수의 총점은 %d 평균은 %.1f\n", sum_class[0], average_class[0]);
    average_class[1] = (float)sum_class[1] / 5;
    printf("영어 점수의 총점은 %d 평균은 %.1f\n", sum_class[1], average_class[1]);
    average_class[2] = (float)sum_class[2] / 5;
    printf("수학 점수의 총점은 %d 평균은 %.1f\n", sum_class[2], average_class[2]);
    printf("2) 각 학생별 총점과 평균점수, 평균에 따른 등급\n");
    for(i = 0; i < 5; i++){
        average_student[i] = (float)sum_student[i] / 3;
        grade[i] = grade_table[4];
        for(j = 0; j < 4; j++){
            if(average_student[i] >= 90 - (j * 10)){
                grade[i] = grade_table[j];
                break;
            }
        }
        printf("%d번 학생의 총점은 %d 평균은 %.1f(등급 %c)\n", i+1, sum_student[i], average_student[i], grade[i]);
    }
    return 0;
}