#include <stdio.h>

/*
  Problem Statement:
    Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
    By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int fib(int pos){ //using recursion just for practice
  if(pos == 0)
    return 0;
  if(pos == 1)
    return 1;
  return fib(pos - 1) + fib(pos - 2);
}

void main(){
  int i,sum = 0;
  for(i = 0; fib(i) < 4000000; i++) //checking to see if Fibonacci Number is less than 4,000,000
      if(fib(i) % 2 == 0) //is it even?
          sum += fib(i);
  printf("sum = %d\n", sum);
}
