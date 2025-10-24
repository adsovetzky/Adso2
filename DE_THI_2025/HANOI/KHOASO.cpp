#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int tol = 0;
  vector<int> a(4);
  a = {2, 0, 2, 5};
  for (int i = 0; i < 4; i++) {
    int x;
    cin >> x;
    tol += min(abs(x - a[i]), abs(x - 10 - a[i]));
  }
  cout << tol;
}
