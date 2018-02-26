#include <stdio.h>
#include <stdlib.h>

int solution(int n);

int main(void) {
  printf("starting\n");
  printf("n=1 %d\n", solution(1));
  printf("n=2 %d\n", solution(2));
  printf("n=3 %d\n", solution(3));
  printf("n=4 %d\n", solution(4));
  return 0;
}

int solution(int n) {
  int ans = -1;
  // f(n) = f(n-1)+f(n-2)+f(n-3)
  if (n <= 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 2;
  } else if (n == 3) {
    return 3;
  } else {
    ans = solution(n - 1) + solution(n - 2) + solution(n - 3);
  }
  return ans;
}
