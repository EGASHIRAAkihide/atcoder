#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int N;

  cin >> N;

  int a[N][N];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      if (j == 0 || j == i)
      {
        a[i][j] = 1;
        cout << a[i][j];
      }
      else
      {
        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        cout << a[i][j];
      }
      
      if (j != i)
      {
        cout << " ";
      }

    }
    cout << endl;
  }
}