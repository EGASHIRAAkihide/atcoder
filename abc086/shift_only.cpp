#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;

  do
  {
    cin >> N;
  }
  while (N < 1 || N > 200);

  int array[N];

  for (int i = 0; i < N; i++)
  {
    cin >> array[i];
  }

  for (int i = 0; i < N; i++)
  {
    while (array[i] % 2 == 0)
    {
      array[i] /= 2
    }
  }



  



  return 0;
}