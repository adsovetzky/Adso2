#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, m;
  cin >> n;
  vector<long long> a(1e5 + 1), d(1e5 + 1, 0);

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    a[x] = 1;
  }
  for (int i = 1; i < 1e5; i++) {
    if (a[i] == 1)
      d[i] = d[i - 1] + 1;
    else
      d[i] = d[i - 1];
  }
  cin >> m;
  // for (int i = 0; i < 100; i++) {
  //   cout << d[i] << " ";
  // }
  while (m--) {
    long long Si, Fi;
    cin >> Si >> Fi;
    cout << d[Fi] - d[Si - 1] << "\n";
  }
}
