// 1. 각 항목들 발생 횟수 세기
for (int i = 0; i < size; i++){
  if (maxValue < data[i])
    maxValue = data[i];
// counts 배열의 크기를 구하기 위해 가장 큰 값을 구한다.
    counts[data[i]]++;
// data[i] 개수만큼 counts 배열의 값을 1씩 더한다.
}

// 2. 각 항목 위치 설정을 위한 카운트 조정
for (int i = 1; i <= maxValue; i++){
  counts[i] = counts[i] + counts[i - 1];
// counts 배열의 항목을 조정하여, 정렬된 배치가 되도록 함
}

// 3. 카운트를 사용하여 각 항목 위치 결정
for (int i = size - 1; i >= 0; i--){
  temp[--counts[data[i]]] = data[i];
// counts 배열의 값을 미리 1씩 감소시키고,
// temp 배열에 data[i] 값 삽입
}
