#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  cin >> s;

  long answer = 1;
  long max_length = 1;
  for (long i = 1; i < s.length(); ++i) {
    if (s[i-1] == s[i]) {
      max_length += 1;
      answer = max(max_length, answer);
    }
    else {
      max_length = 1;
    }
  }
  cout << answer << "\n";
}
