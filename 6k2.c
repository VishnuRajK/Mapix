//https://www.codewars.com/kata/555615a77ebc7c2c8a0000b8
#include <stdlib.h>
#include <stdbool.h>  // for true or false

int tickets(size_t length, const int people[length]) {
  int c=0,d=0;
  bool res = true;
  for (int i=0; i<length; i++)
  {
    if (people [i] == 25)
      c++;
    else if (people [i]==50)
      {
      d++;
      if (c>0)
        { c--;}
      else { res = false; break;}
      } 
    else if (people [i] ==100)
      {
      if (d>0)
        {
        d--;
        if (c>=1)
          c--;
        else 
          {res=false; break;}
        }
      else if (c>=3)
        c=c-3;
      else
        {res= false; break;}
      }
      }
    
 
  return res;
}