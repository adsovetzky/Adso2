#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, q;
  cin >> n >> q;
  vector<long long> meow(n);
  for (int i = 0; i < n; i++) {
    cin >> meow[i];
  }
  while (q--) {
    int check;
    cin >> check;
    if (check == 1) {
      long long i, x, sum = 0;
      cin >> i >> x;
      meow[i - 1] = x;
      cout << accumulate(meow.begin(), meow.end(), sum) << "\n";
    } else if (check == 2) {
      long long k;
      cin >> k;
      vector<long long> kmeow(meow.end() - k, meow.end());
      meow.insert(meow.begin(), kmeow.begin(), kmeow.end());
      meow.erase(meow.end() - k, meow.end());
    }
    // for (auto x : meow) {
    //   cout << x << " ";
    // }
    // cout << endl;
  }
}
