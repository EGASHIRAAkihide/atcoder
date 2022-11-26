#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int H, M;

  do
  {
    cin >> H >> M;
  } while (H >= 24 || M >= 60);

  int Time[4];
  int newH, newM;

  do
  {
    if (H < 10)
    {
      Time[0] = 0;
      Time[1] = H;
    } else {
      Time[0] = H / 10;
      Time[1] = H % 10;
    }

    Time[2] = M / 10;
    Time[3] = M % 10;

    newH = Time[0] * 10 + Time[2];
    newM = Time[1] * 10 + Time[3];

    M++;
    if (M == 60)
    {
      H++;
      M = 0;
    }
    if (H == 24)
    {
      H = 0;
    }
  } while (newH >= 24 || newM >= 60);

  cout << H << ' ' << M - 1 << endl;

  return 0;
}