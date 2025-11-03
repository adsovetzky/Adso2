#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  long long n, cach, x, y, xmax = INT_MIN, xmin = INT_MAX, ymax = INT_MIN,
                           ymin = INT_MAX;
  cin >> n;

  while (n--) {
    cin >> x >> y;
    xmax = max(xmax, x);
    xmin = min(xmin, x);
    ymax = max(ymax, y);
    ymin = min(ymin, y);
    cach = max(xmax - xmin, ymax - ymin);
  }
  cout << cach * cach;
}
