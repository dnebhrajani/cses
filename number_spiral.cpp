#include <bits/stdc++.h>

using namespace std;
int main(void) {
  long t = 0;
  cin >> t;
  while (t--) {
    long y = 0;
    long x = 0;
    cin >> y >> x;
    if (y > x) {
      if (y%2 == 1) {
	cout << ((y-1)*(y-1))+x << "\n";
      }
      else {
	cout << ((y*y)-x)+1 << "\n";
      }
    }
    else if (x > y) {
      if(x%2 == 0) {
	cout << ((x-1)*(x-1))+y << "\n";
      }
      else {
	cout << ((x*x)-y)+1 << "\n";
      }
    }
    else {
      if (y%2 == 1) {
	cout << ((y-1)*(y-1))+y << "\n";
      }
      else {
	cout << ((y*y)-y)+1 << "\n";
      }
    }
  }
}
