#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a, b;

  // aとbを入力
  do
  {
    cin >> a >> b;
  }
  while (a < 1 || a > 10000 || b < 1 || b > 10000);

  int add = 0;
  add = a * b;

  // addが奇数の場合はOddと、偶数の場合はEvenと表示
  if (add % 2 != 0)
  {
    cout << "Odd" << endl;
    return 0;
  }
  cout << "Even" << endl;
  return 0;
}