// Palindrome 문제 풀기
#include <stdio.h>
int main()
{
  int length;
  int count;
  int i, j, k, m;
  char map[8][8] = {0, };
  bool flag;
// boolean형 flag 변수

  for (i=0; i < 10; i++){
    cin >> length;
// 문자열의 길이를 알아낸 뒤,

    for(j=0; j<8; j++)
      for(k=0; k<8; k++)
        cin >> map[j][k];
    count = 0;
//행을 기준으로 가능한 모든 문자에 대해 회문 여부 판단
    for(j=0; j<8; j++){
      for(k=0; k < (8 - length + 1); k++){
        flag = true; //초기화
        for(m = 0; m < (length / 2); m++){
          if(map[j][m+k] != map[j][k+length-m-1])
            flag = false;
        }
        if(flag)
          count++
      }
    }
//열을 기준으로 가능한 모든 문자에 대해 회문 여부 판단
    for (j = 0; j < 8; j++){
      for(k=0; k<(8-length + 1); k++){
        flag = true;
        for (m=0; m<(length/2); m++){
          if(map[m+k][j] != map[k+length-m-1][j])
            flag = false;
        }
        if(flag)
          count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
