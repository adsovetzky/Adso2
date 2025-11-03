#include <bits/stdc++.h>
using namespace std;

long long TinhToan(int n) { return n / 9 * 45 + ((n % 9) * ((n % 9) + 1)) / 2; }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int q;
  cin >> q;
  while (q--) {
    long long l, r;
    cin >> l >> r;
    cout << TinhToan(r) - TinhToan(l - 1) << "\n";
  }
}
