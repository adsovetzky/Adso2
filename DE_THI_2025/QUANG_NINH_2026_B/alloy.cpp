#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;

vector<bool> IsPrime(MAXN + 1, 1);
vector<long long> prime(MAXN + 1, 0), TongPrime(MAXN + 1, 0);

void sang() {
  IsPrime[0] = IsPrime[1] = 0;
  for (int i = 2; i <= sqrt(MAXN); i++) {
    if (IsPrime[i]) {
      for (int j = i * i; j <= MAXN; j += i) {
        IsPrime[j] = 0;
      }
    }
  }
  for (int i = 2; i <= MAXN; i++) {
    if (IsPrime[i]) {
      prime[i] = prime[i - 1] + 1;
      TongPrime[i] = TongPrime[i - 1] + i;
    } else {
      prime[i] = prime[i - 1];
      TongPrime[i] = TongPrime[i - 1];
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  sang();

  long long n;
  cin >> n;
  while (n--) {
    long long a, b;
    cin >> a >> b;
    cout << prime[b] - prime[a - 1] << " " << setprecision(2) << fixed
         << (double)(TongPrime[b] - TongPrime[a - 1]) /
                (prime[b] - prime[a - 1])
         << "\n";
  }
}
