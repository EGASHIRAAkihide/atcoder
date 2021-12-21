#include <bits/stdc++.h>
using namespace std;
 
void saiten(vector<vector<int> > &A, int &correct_count, int &wrong_count) {
  for (int i = 0; i < A.size(); i++) {
    for (int j = 0; j < A.size(); j++) {
      int input_value = A.at(i).at(j);
      if (input_value != (i + 1) * (j + 1)) {
        A.at(i).at(j) = (i + 1) * (j + 1);
        wrong_count++;
      } else {
        correct_count++;
      }
    }
  }
}
 
 
// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int> > A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0;
  int wrong_count = 0;
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}