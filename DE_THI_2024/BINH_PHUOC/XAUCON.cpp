#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  long long dem = 0, maxn = 0;
  for (auto c : s) {
    if (c == '0') {
      dem++;
    } else {
      maxn = max(maxn, dem);
      dem = 0;
    }
  }
  cout << maxn;
}
