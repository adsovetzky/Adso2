#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, ans = 0;
  cin >> n;

  vector<bool> boolprime(3 * n + 1, true);
  vector<long long> prime(3 * n + 1, 0);

  boolprime[0] = boolprime[1] = 0;

  for (long long i = 2; i <= sqrt(3 * n); ++i) {
    if (boolprime[i]) {
      for (long long j = i * i; j <= 3 * n; j += i) {
        boolprime[j] = 0;
      }
    }
  }
  for (int i = 2; i <= 3 * n; i++) {
    if (boolprime[i])
      prime[i] += prime[i - 1] + 1;
    else
      prime[i] = prime[i - 1];
  }
  for (int i = 1; i <= n; i++) {
    ans += prime[2 * i + n] - prime[2 * i];
  }
  cout << ans;
}
