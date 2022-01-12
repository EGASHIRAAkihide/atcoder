#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    // 歌う人数を表す整数 N
    // 課題曲の長さを表す整数 M
    int N, M;

    // N, Mを入力
    cin >> N >> M;

    // 正しい音程
    int interval[M];

    for(int i = 0; i < M; i++) {
      cin >> interval[i];
    }

    // ２次元配列を定義
    vector<vector<int> > data(N, vector<int>(M));

    for(int i = 0; i < N; i++) {
      for(int j = 0; j < M; j++) {
        cin >> data[i][j];
      }
    }

    int point[N];

    // 得点を定義
    for(int i = 0; i < N; i++) {
      point[i] = 0;
      for(int j = 0; j < M; j++) {
        if (abs(interval[j] - data[i][j]) == 0 ) {
          // 何もしない
        } else if (abs(interval[j] - data[i][j]) <= 10) {
          point[i]++;
        } else if (abs(interval[j] - data[i][j]) <= 20) {
          point[i] += 2;
        } else if (abs(interval[j] - data[i][j]) <= 30) {
          point[i] += 3;
        } else {
          point[i] += 5;
        }
        cout << "interval[j]: " << interval[j] << endl;
        cout << "data[i][j]: " << data[i][j] << endl;
      }
    };

    sort(point, sizeof(point));

    cout << 100 - point[0] << endl;
}