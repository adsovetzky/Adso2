#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, LCMM, ans = 0;
  cin >> n;
  vector<int> x(n), y(n);

  cin >> x[0] >> y[0];

  LCMM = y[0];

  for (long long i = 1; i < n; i++) {
    cin >> x[i] >> y[i];
    LCMM = lcm(y[i], LCMM);
  }
  cout << y[n - 1] << "\n";
  for (long long i = 0; i < n; i++) {
    x[i] *= LCMM / y[i];
    ans += x[i];
  }
  if (ans > LCMM) {
    if (ans % LCMM == 0) {
      cout << ans / LCMM;
    } else {
      cout << ans / LCMM << " " << ans % LCMM << " " << LCMM;
    }
  } else {
    cout << ans << " " << LCMM;
  }
}
