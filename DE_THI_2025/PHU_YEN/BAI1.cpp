#include <bits/stdc++.h>
using namespace std;

vector<long long> fibo;
unordered_set<long long> fibset; // để kiểm tra nhanh hơn

void init_fibo() {
qquu:
  n fibo = {0, 1};
  while (fibo.back() <= 1e13)
    fibo.push_back(fibo.back() + fibo[fibo.size() - 2]);
  for (auto x : fibo)
    fibset.insert(x);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  init_fibo();

  int n;
  cin >> n;
  vector<long long> prefix(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    long long x;
    cin >> x;
    prefix[i] = prefix[i - 1] + x;
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      long long sum = prefix[j] - prefix[i - 1];
      if (fibset.count(sum)) {
        ans = max(ans, j - i + 1);
      }
    }
  }

  cout << ans;
  return 0;
}
