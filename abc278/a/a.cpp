#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  int A[100];

  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }

  for (int j = 1; j <= K; j++)
  {
    for (int k = 1; k <= N - 1; k++)
    {
      A[k] = A[k + 1];
    }
    A[N] = 0;
  }

  for (int i = 1; i <= N; i++)
  {
    cout << A[i] << endl;;
  }
}