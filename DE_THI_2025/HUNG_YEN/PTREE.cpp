#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  long long k;
  cin >> n >> k;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  sort(a.begin(), a.end());
  long long ans = 0;
  int j = 0;
  for (int i = 0; i < n; ++i) {
    if (j < i + 1)
      j = i + 1; // j phải > i để i<j
    while (j < n && a[j] - a[i] <= k)
      ++j;
    // sau khi while kết thúc, j là first index không thỏa.
    ans += (j - i - 1); // số phần tử trong (i, j-1)
  }
  cout << ans << '\n';
  return 0;
}
