#include <bits/stdc++.h>

using namespace std;
int main(void) {
  int n = 0;
  cin >> n;

  int trailing_zero = 0;
  for (int i = 5; n >= i; i *= 5) {
    trailing_zero += n / i;
  }
  cout << trailing_zero << "\n";
}
