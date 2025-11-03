#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int dem = 0;
    for (auto c : s) {
      if (c - '0' % s[i] - '0' == 0) {
        dem++;
      }
    }
    if (dem != s.size())
      continue;
    else
      cout << s << " ";
  }
}
