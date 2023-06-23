#include <stdio.h>

int main() {
    int i, j, t, m=1, a, b;
    scanf("%d", &t);
    for(i = 0;i < t;i++){
        scanf("%d%d", &a, &b);
        for(j = 0;j < b;j++){
            m *= a;
			m = m % 10;
            //곱셈이 변수의 크기를 벗어 나므로 필요한 1의 자리 숫자만 남김
        }
        if(m % 10 == 0){//나머지가 0일 경우는 10번째 컴퓨터 이므로 10을 출력
            printf("%d\n", 10);
        }
        else{
            printf("%d\n", m);
        } 
        m=1;
    }
    return 0;
}