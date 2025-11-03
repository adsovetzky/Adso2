#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long s, n;
  cin >> s >> n;
  string u = "1";
  for (long long i = 1; i < s; i++) {
    u += "0";
  }
  long long So = stoi(u);
  long long du = So % n;
  cout << So + (n - du);
}
