#include <stdio.h>
#include <stdlib.h>

void readfile(const char* filename);
void process(void);
void writefile(const char* filename);

int singer_cnt, spd_cnt; // 가수의 수와 보조피디의 수를 저장하는 변수
int grp_arr[1001][1001]; // 그래프의 인접행렬을 저장하기 위한 배열
int result[1000];        // 위상정렬 결과를 저장하기 위한 배열
int result_idx = 0;      // 위상정렬 결과를 저장한 배열의 인덱스를 저장하기 위한 변수

int main()
{
 readfile("input.txt");
 process();
 writefile("output.txt");
 return 0;
}

/*****************************************************************************************
  - 입력파일로부터 데이터를 읽어들여 프로그램 내부의 변수나 배열에 값을 할당하는 함수 -

  입력 파일 첫줄에서 가수의 수와 보조피디의 수를 입력받고, 둘째줄 부터 각 보조피디들의
  부분 순서들을 입력받아 그래프의 인접행렬을 구성한다.
*****************************************************************************************/
void readfile(const char* filename)
{
 FILE* fp;
 int i, j, col_cnt, num1, num2;
 
 if ((fp=fopen(filename, "rt"))==NULL)
 {
  printf("파일이 존재하지 않습니다.\n");
  exit(1);
 }

 // 그래프의 인접행렬을 저장할 배열을 '0'으로 초기화한다.
 for(i = 0 ; i < 1001 ; i++)
 {
  for(j = 0 ; j < 1001 ; j++)
  {
   grp_arr[i][j] = 0;
  }
 }
 
 // 입력파일의 첫줄에서 가수의 수와 보조피디의 수를 입력받는다.
 fscanf(fp, "%d %d", &singer_cnt, &spd_cnt);

 // 두번째 줄부터 각 보조피디의 부분순서를 차례로 입력받아 
 // 인접행렬을 구성한다.
 for(i = 1 ; i <= spd_cnt ; i++)
 {
  // 각 줄의 첫번째에 입력된 보조피디가 담당하는 가수의 수를
  // 입력 받는다.
  fscanf(fp, "%d", &col_cnt);
  // 입력받은 수 만큼 숫자들을 부분순서로 읽어들여 차례로 두 쌍씩
  // 인접행렬을 구성한다.
  for(j = 1 ; j <= col_cnt ; j++)
  {
   num1 = num2;
   fscanf(fp, "%d", &num2);
   
   if(j == 1)
   {
    continue;
   }
  
   grp_arr[num1][num2] = 1;
  }
 }
 
 fclose(fp);
}

/*****************************************************************************************
    - 구성된 인접행렬을 이용하여 위상정렬을 수행하고 그 결과를 배열에 저장하는 함수 -
*****************************************************************************************/
void process()
{
 int i, j, k, node, cnt;
 int is_visited, is_found;


 while(result_idx != singer_cnt)
 {
  is_found = 0;

  // 인접행렬에서 모든 열이 '0'값을 갖는 열을 찾는다.
  // 즉, 그래프상에서 받는 화살표가 없는 노드를 찾는다.
  for(i = 1 ; i <= singer_cnt ; i++)
  {
   cnt = 0;
   for(j = 1 ; j <= singer_cnt ; j++)
   {
    if(grp_arr[j][i] == 1)
    {
     break;
    }
    else
    {
     cnt++;
    }
   }
  
   // 모든 열의 값이 '0'인 열을 발견한 경우
   // 즉, 받는 화살표가 없는 노드를 발견한 경우
   if(cnt == singer_cnt) 
   {
    node = i; // 발견한 열의 인덱스를 변수에 저장한다.
              // 즉, 발견한 노드의 번호를 변수에 저장한다.
    is_visited = 0;

    // 발견한 노드가 위상정렬 수행과정에서 이미 선택된 노드인지 확인한다.
    for(k = 0 ; k < result_idx ; k++)
    {
     if(node == result[k])
     {
      is_visited = 1;
      break;
     }
    }
  
    // 이미 선택된 노드이면 다음 반복으로 넘어간다.
    if(is_visited)
    {
     continue;
    }

    // 이미 선택된 노드가 아니면 그 노드를 선택한다.
    // 즉, 결과값을 저장할 배열에 노드를 추가한다.
    is_found = 1;
    result[result_idx++] = node;
    break;
   }
  }

  // 앞의 과정에서 모든 열이 '0'값을 갖는 즉, 받는화살표가 없는 노드를 발견하였다면,
  // 그 노드에서 출발하는 간선을 제거한다.
  if(is_found)
  {
   for(i = 1 ; i <= singer_cnt ; i++)
   {
    grp_arr[node][i] = 0;
   }
  }
  // 발견하지 못하였다면 위상정렬을 할 수 없는 경우이므로
  // 반복을 멈춘다.
  else
  {
   break;
  }

 }
}

/*****************************************************************************************
          - process 함수에서 구한 위상정렬 결과를 해당 출력파일에 출력한다. -

  process함수에서 구한 위상정렬 순서를 통하여 위상정렬 순서가 존재하는 경우 그 결과를 
  파일에 출력하고 그렇지 못한 경우 '0'을 파일에 출력한다.
*****************************************************************************************/
void writefile(const char* filename)
{
 FILE* fp;
 int i;
 if ((fp=fopen(filename, "wt"))==NULL)
 {
  printf("파일을 생성할 수 없습니다.\n");
  exit(1);
 }

 // 위상정렬 순서가 존재하는 경우 그 결과를 파일에 출력한다.
 if(result_idx == singer_cnt)
 {
  for(i = 0 ; i < result_idx ; i++)
  {
   fprintf(fp, "%d\n", result[i]);
  }
 }
 // 위상정렬 순서가 존재하지 않는 경우 파일에 '0'을 출력한다.
 else
 {
  fprintf(fp, "0");
 }

 fclose(fp);
}

