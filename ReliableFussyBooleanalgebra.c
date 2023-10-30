#include <stdio.h>

int main(void) {
  int x,y;
  int fib(int);
  long int fib2(int);
  for(int i=2;i<=50;i++)
     printf("%ld\n",fib2(i));
  
  return 0;
}

int fib(int n){
  if(n==0 || n==1)
      return n;
  return fib(n-1)+fib(n-2);
}

long int fib2( int  n){
  if(n==0||n==1)
     return n;
  long int fib0=0,fib1=1,fibn;
  for(int i=2;i<n;i++)
    {
      fibn=fib0+fib1;
      fib0=fib1;
      fib1=fibn;
    }
  return fibn;
}