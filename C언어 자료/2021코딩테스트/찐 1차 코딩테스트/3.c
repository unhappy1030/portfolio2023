
#include <stdio.h>

int main(void) {
    float point_sum=0, point_g=0, point_pf=0; // 전체 학점, Grade 평가 학점, Pass/Fail 평가 학점  
    int count=0, count_g=0, count_pf=0; // 전체 과목 수, Grade 평가 과목 수, Pass/Fail 평가 과목 수
    float point; // 반복문 내에서 입력받는 학점 
    int kind=0, kind_g=0;	// 반복문 내에서 입력받는 평가방식, 과목성적번호 
    float grade=0; // 과목 성적
    float grade_sum=0, grade_avg=0; // 성적총합, 성적평균 
    int i;
    printf("How many subjects? > ");
    scanf("%d", &count);
    for(i = 1; i <= count; i++){
        printf("Subject #%d :\n", i);
        printf("- Grade units > ");
        scanf("%f", &point);
        printf("- Kinds of Evaluation (1:Grade, 2:Pass/Fail) > ");
        scanf("%d", &kind);
        if(kind == 2){
            point_pf+=point;
            count_pf++;
            continue;
        }
        else{
            point_g += point;
            count_g++;
            printf("- Your Grade (1:A 2:B 3:C 4:D 5:F) > ");
            scanf("%f", &grade);
            grade_sum += grade * point;
        }
    }
    grade_avg = (grade_sum + point_pf * 4) / (point_g + point_pf);
    printf("Subjects : %d (Grade %d, Pass/Fail %d)\n", count_g + count_pf, count_g, count_pf);
    printf("Total Units : %.1f (Grade %.1f, Pass/Fail %.1f)\n", (float)(point_g + point_pf), (float)point_g, (float)point_pf);
    return 0;
}