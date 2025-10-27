#include <bits/stdc++.h>
using namespace std;

long long TinhTong(long long n) {
  long long tong = 0;
  for (long long i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      tong += i;
      if (i != n / i) {
        tong += n / i;
      }
    }
  }
  return tong;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long a, b, ans = 0;
  cin >> a >> b;

  for (long long i = a; i <= b; i++) {
    if (TinhTong(i) > 2 * i) {
      ans++;
    }
  }
  cout << ans;
}
