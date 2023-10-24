#include <stdio.h>
#include <stdlib.h> //atoi

double factorial(int n){
  double factorial = n;
  for(int i = n-1;i > 0;i--){
    factorial = factorial * (n - i);
  }
  return factorial;
}

double superfactorial(int n){
  int f = factorial(n);
  for(int i = n-1; i > 0; i--){
    f = f * factorial(i);
  }

  return f;
}

int main(int argc, char *argv[])
{
  printf("%lf\n", superfactorial(atoi(argv[1])));
  return 0;
}

