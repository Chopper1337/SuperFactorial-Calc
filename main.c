#include <stdio.h>
#include <stdlib.h> //atoi

int factorial(int n){
  int factorial = n;
  for(int i = n-1;i > 0;i--){
    factorial *= (n - i);
  }
  return factorial;
}

int superfactorial(int n){
  int f = factorial(n);
  for(int i = n-1; i > 0; i--){
    f *= factorial(i);
  }

  return f;
}

int main(int argc, char *argv[])
{
  printf("%d\n", superfactorial(atoi(argv[1])));
  return 0;
}

