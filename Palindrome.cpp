// 문자열 뒤집기
// 처음과 끝의 문자를 바꾸는 과정 반복
void my_strrev(char str[])
{
  int len = 0
  int i;
  char t;

  len = strlen(str);

  for (i = 0 ; i < len/2 ; i++){
    t = str[i];
    str[i] = str[len-1-i];
    str[len-1-i] = t;
  }
}
