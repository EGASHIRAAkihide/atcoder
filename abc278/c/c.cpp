#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
  int N, Q;

  do
  {
    cin >> N >> Q;
  } while (
    N <= 2 &&
    N >= pow(10, 9.0) &&
    Q <= 1 &&
    Q >= 2 * pow(10, 5.0)
  );

  cout << N << Q;

  return 0;
}