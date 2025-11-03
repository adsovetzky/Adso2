#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6;
vector<bool> IsPrime(MAXN, 1);
vector<long long> Prime;

void sang() {
  IsPrime[0] = IsPrime[1] = 0;
  for (int i = 0; i < sqrt(MAXN); i++) {
    if (IsPrime[i]) {
      for (int j = i; j < MAXN; j += i) {
        IsPrime[j] = 0;
      }
    }
  }
  for (int i = 0; i < MAXN; i++) {
    if (IsPrime[i]) {
      Prime.push_back(i);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long a, b;
  cin >> a >> b;
}
