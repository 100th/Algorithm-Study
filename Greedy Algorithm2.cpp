// Baby-Gin Game
scanf("%d", &input);
for (i=0; i<6; i++){
  // ★각 자리 숫자를 카운팅★
  c[(input % 10)]++;
  input /= 10;
// ★암기★ ★각 자리 숫자 카운팅★
}
for (i=0; i<10; i++){
  if (c[i] >= 3) {
    // triplet (숫자가 연속 3번) 조사
    c[i] -= 3; // 3번 나왔으니 counting에서 빼네
    tri += 1;
    i--;
  }
  if ((c[i]>=1)&&(c[i+1]>=1)&&(c[i+2]>=1)){
    // run (0이 아닌 숫자가 연속으로 3번) 조사
    c[i] -= 1;
    c[i+1] -= 1;
    c[i+2] -= 1; // 한 번 counting했으니 빼자
    run += 1;
    i--;
  }
}
if (run + tri == 2)
  printf("Baby.Gin");
else
  printf("Lose");
