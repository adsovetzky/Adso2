#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, cnt;
  cin >> n;
  cnt = (n / 2) * (2 + n - 1);
  cout << cnt;
}
