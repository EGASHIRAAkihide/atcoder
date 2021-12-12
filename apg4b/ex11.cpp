#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A; // N: 計算の数, A: 最初の値
  cin >> N >> A;
 
  string op;  // 演算子
  int B; // 計算する値

  for (int i = 0; i < N; i++) {
    cin >> op >> B;

    if (op == "+") {
      cout << i + 1 << ":" << A + B << endl;
      A = A + B;
    } else if (op == "-") {
      cout << i + 1 << ":" << A - B << endl;
      A = A - B;
    } else if (op == "*") {
      cout << i + 1 << ":" <<  A * B << endl;
      A = A * B;
    } else if (op == "/") {
      if (B > 0) {
        cout << i + 1 << ":" << A / B << endl;
        A = A / B;
      } else {
        cout << "error" << endl;
        break;
      }
    }
  }
}