#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n, k, x;
int a[N];

bool check(int len) {
  if (!len)
    return true;

  int freq[10] = {};
  for (int i = 0; i < n; ++i) {
    freq[a[i]]++;
    if (i >= len)
      freq[a[i - len]]--;

    if (i >= len - 1) {
      vector<int> v;
      for (int j = 1; j <= 9; ++j) {
        if (freq[j])
          v.push_back(freq[j]);
      }
      sort(v.rbegin(), v.rend());

      int keep = 0;
      for (int j = 0; j < min((int)v.size(), k); ++j) {
        keep += v[j];
      }
      if (len - keep <= x)
        return true;
    }
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  cin >> n >> k >> x;
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  int l = 0, r = n, ans = 0;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(mid)) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }

  cout << ans;
  return 0;
}
