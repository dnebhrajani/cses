#include <bits/stdc++.h>

using namespace std;

int main(void) {
  long n;
  cin >> n;
  vector<long> a(n);
  for (long i = 0; i < n; ++i) {
    cin >> a[i];
  }

  long min_mov = 0;
  for (long i = 1; i < n; ++i) {
    if (a[i] < a[i-1]) {
      min_mov += a[i-1]-a[i];
      a[i] += a[i-1]-a[i];
    }
  }
  cout << min_mov << "\n";
}
