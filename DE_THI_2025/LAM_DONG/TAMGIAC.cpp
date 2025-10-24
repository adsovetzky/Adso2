#include <bits/stdc++.h>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
  return fabs(0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double xa, ya, xb, yb, xc, yc, xm, ym;
  cin >> xa >> ya >> xb >> yb >> xc >> yc >> xm >> ym;

  double ABC = area(xa, ya, xb, yb, xc, yc);
  double ABM = area(xa, ya, xb, yb, xm, ym);
  double BCM = area(xb, yb, xc, yc, xm, ym);
  double CAM = area(xc, yc, xa, ya, xm, ym);

  // So sánh với sai số nhỏ để tránh lỗi do số thực
  if (fabs((ABM + BCM + CAM) - ABC) < 1e-9)
    cout << 1;
  else
    cout << 0;

  return 0;
}
