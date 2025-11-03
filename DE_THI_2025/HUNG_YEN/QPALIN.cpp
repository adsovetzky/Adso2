#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;
  s = "@" + s;

  while (q--) {
    int l, r;
    cin >> l >> r;
    string u = s.substr(l, r - l + 1), t;
    t = u;
    reverse(u.begin(), u.end());
    if (u == t) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
}
