#include <bits/stdc++.h>
#include <string>
using namespace std;

const int MAXN = 1e6 + 1;
vector<bool> Prime(MAXN, 1);
vector<string> IsPrime(MAXN, "");

void sang() {
  Prime[0] = Prime[1] = 0;
  for (int i = 0; i < sqrt(MAXN); i++) {
    if (Prime[i]) {
      for (int j = i; j < MAXN; j += i) {
        IsPrime[j] += to_string(i);
        Prime[j] = 0;
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  sang();

  long long p, q, ans = 0;
  cin >> p >> q;

  map<string, int> mp;

  for (int i = p; i <= q; i++) {
    mp[IsPrime[i]]++;
  }
  for (auto x : mp) {
    if (x.second > 1) {
      ans += (x.second * (x.second - 1)) / 2;
    }
  }

  cout << ans;
}
