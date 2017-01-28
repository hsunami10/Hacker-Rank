#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  vector<string> s = {"one","two","three","four","five","six","seven","eight","nine"};
  cin >> n;
  if(n >= 1 && n <= pow(10,9)) {
    if(n > 9)
      cout << "Greater than 9" << '\n';
    else
      cout << s[n-1] << '\n';
  }
  else
    cerr << "Number not in range. Range in between 1-10^9" << '\n';

  return 0;
}
