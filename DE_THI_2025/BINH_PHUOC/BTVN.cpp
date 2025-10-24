#include <bits/stdc++.h>
#include <cmath>
using namespace std;

const int MAXN = 200;
vector<bool> boolprime(MAXN + 1, 1);
vector<long long> prime;

void sang() {
  boolprime[0] = boolprime[1] = 0;
  for (int i = 2; i <= sqrt(MAXN); i++) {
    if (boolprime[i]) {
      prime.push_back(i);
      for (int j = i * i; j <= MAXN; j += i) {
        boolprime[j] = 0;
      }
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  sang();

  long long N;
  cin >> N;
  while (N--) {
    vector<long long> a;

    long long n;
    long long ans = 1;

    cin >> n;
    for (auto p : prime) {
      if (p > n)
        break;
      long long mu = 0, x = p;
      while (x <= n) {
        mu += n / x;
        x *= p;
      }
      a.push_back(mu);
    }
    for (int i = 0; i < a.size(); i++) {
      ans *= (pownf128(prime[i], a[i] + 1) - 1) / (prime[i] - 1);
    }
    cout << ans << "\n";
  }
}
