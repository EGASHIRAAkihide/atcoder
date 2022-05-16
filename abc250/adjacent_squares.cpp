#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int H, W, R, C;

  do
  {
    cin >> H >> W >> R >> C;
  }
  while (
    0 < H && H > 10 &&
    0 < W && W > 10 &&
    0 < R && R > 10 &&
    0 < C && C > 10
  );

  int side_share_count = 0;

  if (R - 1 > 0 && R - 1 <= H)
  {
    side_share_count++;
  }

  if (R + 1 > 0 && R + 1 <= H)
  {
    side_share_count++;
  }

  if (C - 1 > 0 && C - 1 <= W)
  {
    side_share_count++;
  }

  if (C + 1 > 0 && C + 1 <= W)
  {
    side_share_count++;
  }

  cout << side_share_count << endl;
}