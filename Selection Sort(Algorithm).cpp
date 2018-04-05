#define swap(a,b) {int t; t=a; a=b; b=t;}
void SelectionSort(char *a, int size)
{
  int min;
  int i, j;
  // 배열 전체를 순회한다.
  for (i=0; i < size - 1 ; i++)
  {
    min = i;
  // 임시로 최소값이라 판단한다.
  // i 이후의 최소값을 찾는다.
    for (j= i + 1; j < size; j++){
      if (a[min] > a[j]){
        min = j;}}
      // 최소값을 현재값(i번째)과 교환한다.
      if (min != i){
        swap(a[min], a[i]);}
  }
}
