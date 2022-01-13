#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C, X;

  // A, B, C, Xを入力
  do
  {
    cin >> A >> B >> C >> X;
  }
  while (A > 50 || B > 50 || C > 50 || X > 20000 || X % 50 != 0);

  int count = 0;
  int sum = 0;

  for (int i = 0; i < A + 1; i++) {
    for (int j = 0; j < B + 1; j++) {
      for (int k = 0; k < C + 1; k++) {
        sum = 500 * i + 100 * j + 50 * k;
        if (sum == X) {
          count++;
        }
      } 
    }
  }

  cout << count << endl;
}