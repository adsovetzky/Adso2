#include <bits/stdc++.h>
#include <ios>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> inp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    inp.push_back(x);
  }
  sort(inp.begin(), inp.end());
  int ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    auto pos = lower_bound(inp.begin(), inp.end(), l - inp[i]);
    if (pos - inp.begin() == i)
      continue;
    else if (inp[i] + *pos > r)
      continue;
    else {
      ans = min(ans, inp[i] + *pos);
    }
  }
  cout << ans;
}
