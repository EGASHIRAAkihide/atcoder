#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int N, X;

  cin >> N >> X;

  string text;

  for (char i = 'A'; i <= 'Z'; i++)
  {
    for (int j = 0; j < N; j++)
    {
      text.push_back(i);
    }
  }

  cout << text[X - 1] << endl;
}