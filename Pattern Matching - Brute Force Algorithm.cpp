//고지식한 패턴 검색 알고리즘
#include <stdio.h>
int main()
{
  char t[] = {"TTTTATTATTTCTAACCAA"}; // 텍스트
  char p[] = {"TTATTTCTA"}; // 패턴
  int N = 19, M = 9; // 텍스트 길이, 패턴 길이
  int i, j;

  for (i=0; i < N; i++) {
// 텍스트의 인덱스를 하나씩 증가시킨다. 패턴과 비교하고
// 실패했을 경우, 텍스트는 원점으로 가지 않고 그 다음
// 인덱스부터 비교를 시작한다.
    for (j = 0; j < M; j++) {
// 실패했을 경우 다시 시작점으로 간다
      if (t[i+j] != p[j])
        break;}
// 실패 했을 경우, 패턴의 반복 문을 빠져 나온다.
    if (j==M){
// 패턴 반복 문을 끝냈을 경우, j는 패턴의 길이와 같을
// 수 있다. 이 경우는 텍스트에서 패턴을 찾았다는 의미와 같다.
      printf("find");
      break;
    }
  }
  return 0;
}
