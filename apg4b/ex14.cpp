#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int maxValue = max(max(A, B), C);
  int minValue = min(min(A, B), C);

  cout << maxValue - minValue << endl;
}