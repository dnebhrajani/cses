#include <bits/stdc++.h>
using namespace std;

int main(void) {
  long n = 0;
  cin >> n;
  long sum = 0;
  for(long i = 0; i < (n-1); ++i) {
    long a = 0;
    cin >> a;
    sum += a;
  }
  long actual_sum = n*(n+1)/2;
  cout << actual_sum - sum << "\n";
}
