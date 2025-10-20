#include <bits/stdc++.h>
using namespace std;

long long TongSoChinhPhuong(long long n) {
  return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n;
  cin >> n;

  long long l = 0, r = 2e6, mid = (r + l) / 2;
  while (l < r) {
    if (TongSoChinhPhuong(mid) <= n) {
      l = mid;
    } else {
      r = mid - 1;
    }
    mid = (r + l) / 2;
  }
  cout << mid << "\n" << n - TongSoChinhPhuong(mid);
}
