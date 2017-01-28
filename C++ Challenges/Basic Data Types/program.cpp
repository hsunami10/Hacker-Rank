#include <iostream>

using namespace std;

int main() {
  int i;
  long l;
  long long ll;
  char c;
  float f;
  double d;
  
  // Read in data types
  scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &c, &f, &d);
  
  // Print out data types
  printf("%d\n%ld\n%lld\n%c\n%.3f\n%.9lf\n", i, l, ll, c, f, d);

  return 0;
}
