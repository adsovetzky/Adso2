#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, cnt = 1;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (cnt == a[i])
      cnt = *max_element(a.begin(), a.end()) + 1;
    cout << cnt << " ";
  }
}
