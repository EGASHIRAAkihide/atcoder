#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
  int N;

  cin >> N;

  if (N % 100 > 9)
  {
    cout << N % 100 << endl;
  }
  else
  {
    cout << "0" << N % 100 << endl;
  }
}