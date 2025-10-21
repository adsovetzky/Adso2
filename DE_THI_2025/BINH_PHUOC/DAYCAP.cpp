#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  long long n, k, ans = 0;
  cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long l = 1, r = *max_element(a.begin(), a.end());
  while(l <= r) {
    long long tol = 0;
    long long mid = (l + r) / 2;
    cout << mid << " ";
    for(int i = 0; i < n; i++) {
      tol += a[i] / mid;
    }
    if(tol > k) {
      l = mid + 1;
    }
    if(tol == k) {
      ans = mid;
    } else {
      r = mid - 1;
    }
  }
  cout << endl << ans;
}
