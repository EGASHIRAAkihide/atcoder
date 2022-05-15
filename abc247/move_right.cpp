#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
  string S;

  do
  {
    cin >> S;
  }
  while (S.length() != 4);

  if (S.substr(0, 1) == "0")
  {
    S.insert(0, "1");
    S.pop_back();
  } else
  {
    S.insert(0, "0");
    S.pop_back();
  };

  cout << S << endl;
}