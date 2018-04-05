//사다리타기
//밑에서 부터 올라간다.
//테두리를 000000으로 만들어준다. (여유 두기)
int search(int Map[102][102], int start)
{
  int y = 100, x = start;
//★암기★★★배열은 좌표가 arr[y][x]이다.★★★

  while (y != 1) // y가 1이 되지 않는다면 계속해
  {
    if (Map[y][x-1] == 1) // 좌측 사다리가 있으면
    {
      while (Map[y][x-1] != 0){
        x--; // 왼쪽으로 움직여~
      }
      y-- // 끝나면 위로 한 칸 전진
    }
    else if(Map[y][x+1] == 1 )
    {
      while(Map[y][x+1] != 0)//우측 사다리가 있으면
      {
        x++; // 오른쪽으로 움직여~
      }
      y--; // 끝나면 위로 한 칸 전진
    }
    else {
      y--; // 아무 것도 아니면 위로 계속 전진~
    }
  }
  return x;
}
//-----------------------------------------
//위는 search 함수 정의
int testCase, t;
int i, j;

int main()
{
  int Map[102][102];
  int num_of_testcase;
  int target;

//테스트케이스
  scanf("%d", &testCase);

for (t=0; t<testCase; t++){
  scanf("%d", &num_of_testcase);

// 사다리 초기화
  for (i=0; i<102; i++)
    for (j=0; j<102; j++)
      Map[i][j] = 0;

// input 값
  for (i = 1; i<101; i++)
    for (j = 1; j<101; j++)
      scanf("%d", &Map[i][j]);

// 도착 지점 찾기
  for (i=0; i<102; i++){
    if (Map[100][i] == 2){
      target = i;
      break;
    }
  }

printf("%d\n", search(Map, target) -1);}
  return 0;}
