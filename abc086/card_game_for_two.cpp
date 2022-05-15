#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  int a[N];

  do
  {
    cin >> N;
  }
  while (N > 100);

  for (int i = 0; i < N; i++)
  {
    do
    {
      cin >> a[i];
      cout << a[i] << endl;
    }
    while (a[i] > 100);
  }

  vector<int> scoreA;
  vector<int> scoreB;

  for (int i = 0; i < N; i++)
  {
    if (a[i] % 2 == 0)
    {
      scoreA.push_back(a[i]);
    }
    else
    {
      scoreB.push_back(a[i]);
    }
  }

  int sumA = 0;
  int sumB = 0;

  for (int i = 0; i < sizeof(scoreA); i++)
  {
    sumA += scoreA[i];
    cout << scoreA[i] << endl;
  }

  for (int i = 0; i < sizeof(scoreB); i++)
  {
    sumB += scoreB[i];
  }
}