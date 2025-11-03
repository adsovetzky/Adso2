#include <bits/stdc++.h>
#include <ios>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  long long m, n;
  cin >> m >> n;
  string s1, s2;
  cin >> s1 >> s2;
  long i = 0, j = 0;
  while (i < m && j < n) {
    if (s1[i] == s2[j])
      i++;
    j++;
  }
  if (i == m) {
    cout << "Y";
  } else {
    cout << "N";
  }
}
