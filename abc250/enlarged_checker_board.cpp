#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int N, A, B;

  do
  {
    cin >> N >> A >> B;
  }
  while (
    0 < N && N > 10 &&
    0 < A && A > 10 &&
    0 < B && B > 10
  );

  int row = A * N;
  int column = B * N;
  vector<string> Tiles(row, string(column, '*'));

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      if (((i / A) + (j / B)) % 2 == 0)
      {
        Tiles[i][j] = '.';
      }
      else
      {
        Tiles[i][j] = '#';
      }
    }

    cout << Tiles[i] << endl;
  }
}