#include <bits/stdc++.h>

using namespace std;
int main(void) {
  long n = 0;
  cin >> n;
  long x = n*(n+1)/2;
  
  if (x%2 == 1) {
    cout << "NO\n";
  }
  else {
    cout << "YES\n";
    cout << n/2 << "\n";
    long increment = 1;
    long decrement = n;
    long sum = 0;
    bool flag = true;
    while (sum != x/2) {
      if (flag) {
	sum += decrement;
	cout << decrement-- << " ";
      }
      else {
	sum += increment;
	cout << increment++ << " ";
      }
      flag = !flag;
    }
    cout << "\n";
    cout << n-n/2 << "\n";
    for (long i = 0; i < n-n/2; ++i) {
      cout << increment++ << " ";
    }
    cout << "\n";
  }
}
