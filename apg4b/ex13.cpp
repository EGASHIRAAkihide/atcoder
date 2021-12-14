#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  int sum;
  int average;
  vector<int> vec(N);

  for(int i = 0; i < N; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }

  average = sum / vec.size();

  for(int i = 0; i < N; i++) {
    cout << abs(average - vec.at(i)) << endl;
  }
}