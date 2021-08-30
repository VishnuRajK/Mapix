//https://www.codewars.com/kata/55a2d7ebe362935a210000b2
#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
    int a = vec[0];
    while(len--)
      {
        if (a>vec[len])
          a=vec[len];
      }
  return a;
}