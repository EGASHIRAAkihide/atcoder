#include <bits/stdc++.h>
using namespace std;

int digit_sum(int number);
 
int main() {
  int N, A, B;

  // A, B, C, Xを入力
  do
  {
    cin >> N >> A >> B;
  }
  while (N > pow(10, 4) || A > B || B > 36);

  // 出力値
  int answer = 0;

  for (int i = 0; i < N + 1; i++)
  {
    int sum = digit_sum(i);
    if (A <= sum && sum <= B)
    {
      answer += i;
    }
  }

  cout << answer << endl;
}

// 各桁数を求める
int digit_sum(int number) {
  if (number < 10) return number;
  return digit_sum(number / 10) + (number % 10);
}