#include <iostream>
#include <string>

using namespace std;

int main() {
  int sum, a, b, c;

  cin >> a >> b >> c;
  if(a >= 1 && a <= 1000 && b >= 1 && b <= 1000 && c >= 1 && c <= 1000) {
    sum = a + b + c;
    cout << sum << endl;
  }
  else
    cerr << "Input has to range in between 1 and 1000.";
  return 0;
}
