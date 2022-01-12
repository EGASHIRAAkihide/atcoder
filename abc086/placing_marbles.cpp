#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
 
int main() {
  char s[3];
  scanf("%s", s);

  int point = 0;

  for (int i = 0; i < sizeof(s); i++)
  {
    if (s[i] == '1')
    {
      point++;
    }
  }
  cout << point << endl;
  return 0;
}