#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
  // * points to the content
  int newA = *a;
  *a = *a + *b;
  *b = abs(newA - *b);
}

int main() {
  int a, b;
    
  // Take memory addresses of a and b
  // Assign them to pointer (variables) pa and pb
  int *pa = &a, *pb = &b;
  
  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
