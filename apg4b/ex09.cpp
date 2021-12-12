#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  // 2.の出力
  int sum = x * (a + b);
  cout << sum << endl;

  // 3.の出力
  cout << sum * sum << endl;

  // 4.の出力
  cout << sum * sum - 1 << endl;
}