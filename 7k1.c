//https://www.codewars.com/kata/54c27a33fb7da0db0100040e
#include <stdbool.h>
#include <math.h>

bool is_square(int n) {

    int a = sqrt(n);
    if (n==(a*a))
      return true;
    else
      return false;

}