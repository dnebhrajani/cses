#include <bits/stdc++.h>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    int m;
    cin >> n >> m;

    if (((n+m) % 3 != 0) or (n > m and n-m > m) or (m > n && m-n > n)) {
      cout << "NO\n";
    }
    else if ((n+m) % 3 == 0) {
      cout << "YES\n";
    }
  }
}
