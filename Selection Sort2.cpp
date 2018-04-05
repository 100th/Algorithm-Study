//5x5 빙고판에서 시계방향(달팽이처럼)으로 숫자 정렬하기
int sel_min(int ary[][5])
{
  int min=0;
  int minX=0, minY=0;

  min ary[0][0];
  for(int i=0; i<5; i++)
    for(int j=0; j<5; j++)
      if(min > ary[i][j])
      {
        min = ary[i][j];
        minX = i;
        minY = j;
      }
  ary[minX][minY]=26;
// 최소값을 중복하여 찾지 않기 위해
// 충분히 큰 값으로 바꾸어 둔다.
  return min;
}
// 배열에서 최소값을 찾는다.
// 굳이 달팽이처럼 순회를 할 필요는 없다.

void main()
{
  int ary[][5] = {
    {9, 20, 2, 18, 11},
    {19, 1, 25, 3, 21},
    {8, 24, 10, 17, 7},
    {15, 4, 16, 5, 6},
    {12, 13, 22, 23, 14}
  };

  int sorted_ary[5][5]={0};
  int cur_min = -1;
  int X, Y;
  int newX=0, newY=0;

  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, 1, 0, -1};
  int dir_stat = 0;
// 배열을 순회 할 때, 다음으로 이동할 방향 지정

  for(int i=0; i < 25; i++)
  {
    cur_min = sel_min(ary);
    X = newX;
    Y = newY;
    sorted_ary[Y][X] = cur_min;

    newX = X + dx[dir_stat];
    newY = Y + dy[dir_stat];

    if(sorted_ary[newX][newY] != 0 || newY > 4 || newX > 4){
// 경계면에서 방향 변경
      dir_stat = (dir_stat + 1) % 4;
      newX = X + dx[dir_stat];
      newY = Y + dy[dir_stat];
    }
  }
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    printf("%3d", sorted_ary[i][j]);
  printf("\n");
  }
}
