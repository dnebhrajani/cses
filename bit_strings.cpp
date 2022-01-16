#include <bits/stdc++.h>

using namespace std;
int main(void) {
  long n = 0;
  cin >> n;
  long string_num = 1;

  for (long i = 0; i < n; ++i) {
    string_num *= 2;
    string_num %= 1000000007;
  }
  cout << string_num << "\n";
}
