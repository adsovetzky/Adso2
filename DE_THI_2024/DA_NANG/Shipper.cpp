#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, m, ans = 0, cnt;
  cin >> n >> m;
  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    mp[x]++;
  }
  for (pair<const long long, long long> x : mp) {
    if (x.second > m)
      continue;
    else {
      ans = max(ans, x.second);
    }
  }
  auto it = mp.begin();
  for (; it != mp.end(); ++it) {
    if (it->second == ans)
      break;
  }
  if (it != mp.end()) {
    cout << it->first;
  }
  // cout << *upper_bound(mp.begin(), mp.end(), m);
}
