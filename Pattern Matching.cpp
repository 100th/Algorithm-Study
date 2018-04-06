// 고지식한 패턴 검색 알고리즘 사용
int main()
{
  int T, i, j, tc_len, str_len, flag=0, cnt;
  char tc[5000];
  char str[10];

  for (T=0; T<10; T++){
    tc_len = str_len = 0;

    scanf("%s" str);
    scanf("%s" tc);

    while (str[str_len] != '\0') // 검색할 문자열의 길이를 구한다.
      str_len++;
    while (tc[tc_len] != '\0') // 문장의 길이를 구한다.
      tc_len++;

    cnt = 0;
    for(i=0; i<tc_len; i++){
      flag = 0;
      if (tc[i] == str[0]){
        for(j=1; j<str_len; j++){
          if(tc[i+j] != str[j]){
            flag = 0;
            break;
          }
          else
            flag = 1;
        }
      }
      if (flag)
        cnt++;
    }
    printf("%d\n", cnt);
  }
  return 0;
}
