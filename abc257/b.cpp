// #include <bits/stdc++.h>
// #include <stdio.h>
// using namespace std;

// int main(){
//   int N, K, Q;

//   cin >> N >> K >> Q;

//   int A[K];
//   int L[Q];

//   for (int i = 0; i < K; i++)
//   {
//     cin >> A[i];
//   }

//   for (int j = 0; j < Q; j++)
//   {
//     cin >> L[j];
//     cout << L[j] << endl;
//   }

//   // Q回の操作を行う
//   for (int k = 0; k < Q; k++)
//   {
//     int L_array = L[k];
//     if (A[L_array] == N)
//     {
//       continue;
//     }
//     else if (A[K].sizeA[(L_array + 1)])
//   }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k, q;
	int a[201];
	int x;
	cin >> n >> k >> q;
	for (int i = 1; i <= k; i++)cin >> a[i];
	for (int i = 0; i < q; i++) {
		cin >> x;
		if (a[x] == n)continue;
		else if (x == k)a[x]++;
		else if (a[x] + 1 < a[x + 1])a[x]++;
	}
	for (int i = 1; i <= k; i++) {
		cout << a[i];
		if (i < k)cout << " ";
		else cout << endl;
	}
	return 0;
}