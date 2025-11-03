#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long n, a;
  cin >> n >> a;
  cout << n + ((n * (n - 1)) / 2) * a;
}
