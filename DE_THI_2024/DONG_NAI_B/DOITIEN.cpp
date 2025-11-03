#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string s;
  cin >> s;
  s.erase(s.size() - 4, 3);
  int n = stoi(s);
  if (n < 50) {
    cout << 50 % n << "000";
  } else {
    cout << n % 50 << "000";
  }
}
