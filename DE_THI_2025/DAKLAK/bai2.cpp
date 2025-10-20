#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int ans = 0;
  string s, u = "";
  cin >> s;
  for (auto x : s) {
    if (isdigit(x))
      u += x;
    else {
      if (!u.empty()) {
        ans += stoi(u);
        u = "";
      }
    }
  }
  if (!u.empty())
    ans += stoi(u);
  cout << ans;
}
