// 평탄화 해결하기
dump(data[100], dumpCount)
{
  int max = 0; // 최고 높이
  int min = 0; // 최저 높이
  int maxIndex, minIndex;
  // 최고, 최저높이의 인덱스 값을 저장

  while(dumpCount != 0)
  // 카운트가 0이 되면 loop를 나옴
  {
    max = data[0]; // 순차검색을 위한 초기화
    min = data[0];
    maxIndex = 0;
    minIndex = 0;

    for i from 1 to 99
    {
      if(max < data[i]) // 최고 높이 상자 찾기
      {
        max = data[i];
        maxIndex = i; // 인덱스는 따로!
      }
      if(min > data[i]) // 최저 높이 상자 찾기
      {
        min = data[i];
        minIndex = i;
      }
    }

    data[maxIndex] = data[maxIndex] - 1;
    data[minIndex] = data[minIndex] + 1;
// 최고 높이 감소 & 최저 높이 증가

    dumpCount = dumpCount -1; // 카운트 감소
  }
// 최종 덤프 수행 후, 최고점과 최저점의 높이의 차
max = data[0];
min = data[0];

for i from 1 to 99
{
  if(max < data[i]) // 최고 높이 상자 찾기
  {
    max = data[i];
  }

  if(min > data[i]) // 최저 높이 상자 찾기
  {
    min = data[i];
  }
}
return max-min;
}

main()
{
  int dumpCount;
  int data[100];

  for i from 0 to 9
  {
    read dumpCount;

    for j from 0 to 99
    {
      read data[j];
    }
    print '#', i+1, ' ', dump(data, dumpCount);
  }
  return 0;
}
