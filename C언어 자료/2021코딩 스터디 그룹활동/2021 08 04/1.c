#include <stdio.h>
/* 10개의 숫자를 입력받아
배열에 저장한 후에
이 중에서 두 번째로 큰 수가 
몇 번째 숫자인지 찾아내어 
출력하라*/


//1. 10개의 숫자를 입력받고 배열에 저장 
//1-1. 10개짜리 정수를 선언
//1-2. 10번을 반복하면서 다음을 수행

//2. 이 중에서 두번째 큰 수를 찾아내어 몇 번째 숫자인지 찾아내기
//2-1. 첫 번째로 큰 수를 찾아내기 
//2-2. 그 다음 큰 수를 찾아내기

int main(void)
{
    int num[10]; //10개의 숫자
    int first;// 첫번째로 큰 수
    int second;// 두번째로 큰 수
    int second_max_index;
    //두 번째로 큰 수의 인덱스
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d번째 수를 입력하시오.",i+1);
        scanf("%d",&num[i]);
    }
//2. 이 중에서 두번째 큰 수를 찾아내어 몇 번째 숫자인지 찾아내기
//2-1. 첫 번째로 큰 수를 찾아내기 
//2-2. 그 다음 큰 수를 찾아내기
    first=num[0];
    for(i=0;i<10;i++)
    {
        if(num[i]>first)
        {
            num[i]=first;
        }
    }
    printf("첫 번째로 큰 수는 %d입니다.",first);

/*second=num[0];
for(i=0;i<10;i++)
{
   if (num[i]<first&&num[i]>second)
  {
  num[i]=second;
  second_max_index=i;
  }
}

printf("두 번째로 큰 수는 %d번째 수 %d입니다.",i,second);
*/
    return 0;
}