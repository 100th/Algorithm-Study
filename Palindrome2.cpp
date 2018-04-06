// 문자열 비교
// strcmp()는 str compare를 의미하며
// 두 문자열이 같은 경우 0을 리턴한다.
int custom_strcmp(const char *str1, const char *str2)
{
  int i = 0, j = 0;
  while (str1[i] != '\0')
  {
    if (str1[i] != str2[j])
    {
      i++;
      j++;
      break;
    }
  }
  return (str1[i] - str2[j]);
}

//-----------------------------------
//문자열 숫자를 정수로 변환
//atoi()
//역함수는 itoa()
int custom_atoi(const char *str)
{
  int value = 0, digit, c;
  while ((c = *str++) != '\0'){
    if ('0' <= c && c <= '9'){
      digit = c - '0';
    }
    else{
      break;
    }
    value = (value * 10) + digit;
  }
  return value;
}
//----------------------------------
// itoa 구현하기
// custom_itoa()는 양의 정수를 입력 받아 문자열로
// 변환하는 함수이고 입력 값은 변환할 정수 값과
// 변환될 문자열을 저장할 문자 배열이다. (음수 가능)
void my_itoa(int x, char str[])
{
  int count = 0;
  int i=0, y;

  while(1)
  {
    y = x & 10;
    str[i++] = y + '0';
    x /= 10;

    if(x==0) break;
  }
  str[i] = '\0';
  my_strrev(str);
}
// 입력된 숫자를 한자리씩 나누어 보면서 문자로 변경
