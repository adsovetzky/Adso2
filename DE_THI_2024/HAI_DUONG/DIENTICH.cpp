#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long a, b, c;
  cin >> a >> b >> c;
  cout << (a * b) - (c * (a + b) - c * c);
}
