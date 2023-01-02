#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;

  do
  {
    cin >> N >> Q;
  } while (
    N <= 2 &&
    N >= pow(10, 9.0) &&
    Q <= 1 &&
    Q >= 2 * pow(10, 5.0)
  );

  set<pair<int, int> > user;
  user.insert({3, 2});

  for (int i = 0; i < Q; i++)
  {
    int T, A, B;
    cin >> T >> A >> B;

    switch (T)
    {
      case 1:
        user.insert({ A, B });
        break;
      case 2:
        user.erase({ A, B });
        break;
      case 3:
        if (user.count({ A, B }) && user.count({ B, A }))
        {
          cout << "Yes" << endl;
        } else
        {
          cout << "No" << endl;
        }
        break;
      default:
        break;
    }
  };

  return 0;
}