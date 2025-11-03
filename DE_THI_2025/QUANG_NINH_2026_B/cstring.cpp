#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s, t;
  cin >> s >> t;
  long long ans = 0, index = t.find(s);

  while (t.find(s, index) != -1) {
    ans++;
    index = t.find(s, index) + s.size();
  }
  cout << ans;
}
