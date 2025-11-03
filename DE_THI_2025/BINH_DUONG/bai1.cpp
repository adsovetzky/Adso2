#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, ans = 0;
  cin >> n;
  while (n > 1) {
    if (n & 1) {
      if (((n + 1) / 2) & 1) {
        n--;
      } else {
        n++;
      }
    } else {
      n /= 2;
    }
    ans++;
  }
  cout << ans;
}
