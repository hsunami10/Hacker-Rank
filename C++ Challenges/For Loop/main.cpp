#include <iostream>
#include <vector>

using namespace std;

int main() {
  int a,b;
  cin >> a;
  cin >> b;
  vector<string> v = {"one","two","three","four","five","six","seven","eight","nine"};

  for(int i = a; i <= b; i++) {
    if(i >= 1 && i <= 9)
      cout << v[i-1] << '\n';
    else {
      if(i % 2 == 0)
	cout << "even\n";
      else
	cout << "odd\n";
    }
  }

  return 0;
}
