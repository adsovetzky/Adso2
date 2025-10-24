#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    auto pos = lower_bound(a.begin(), a.end(), l - a[i]);
    if (pos - a.begin() == i)
      continue;
    else if (a[i] + *pos > r)
      continue;
    else {
      ans = min(ans, a[i] + *pos);
    }
  }
  cout << ans;
}
