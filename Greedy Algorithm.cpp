int coins[] = {500,250,100,50,10};
// 아하~ 배열을 지정하고 counting하기
int count[5];
// 배열 coins랑 count 이렇게 두개 만들었네
int money;
int i = 0;

int main()
{
  scanf("%d", &money);

  while (money != 0)
  {
    if (money < 0) // 거스름돈을 많이 준 경우
    {
      count[i]--;
      money += coins[i++];
    }
    else // 거스름 돈을 더 주어야 하는 경우
    {
      count[i]++;
      money -= coins[i];
    }
  }
  for (i=0; i<5 ; i++) {
    printf("%d : %d\n", coins[i], count[i]);
  }
}
