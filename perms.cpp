#include <bits/stdc++.h>

using namespace std;
int main(void) {
  int n = 0;
  cin >> n;
  
  if (n == 1) {
    cout << n << "\n";
    return 0;
  }
  
  if (n < 4) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  if (n%2 == 1) {
    for (int i = n; i >= 1; i = i-2) {
      cout << i << " ";
    }
    for (int j = n-1; j >= 2; j = j-2) {
      cout << j << " ";
    }
    return 0;
  }
  for (int i = n-1; i >= 1; i = i-2) {
    cout << i << " ";
  }
  for (int j = n; j >= 2; j = j-2) {
    cout << j << " ";
  }
  cout << "\n";
}
