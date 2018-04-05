//tempCount : 배열의 크기
for (loop = 0; loop < tempCount - 1; loop++ ){
// 배열의 원소 크기만큼 반복한다.
  for (i = 0; i < tempCount - 1 - loop; i++){
    //인접한 원소가 작으면 교환한다.
    if (temp[i] > temp[i+1])
    {
      hold = temp[i];
      temp[i] = temp[i+1];
// 가장 큰 원소는 정렬이 됐고, 그 것을 제외한 나머지를 반복
      temp[i+1] = hold; 
    }
  }
}
