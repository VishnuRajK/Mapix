//https://www.codewars.com/kata/54ff3102c1bad923760001f3
#include <stddef.h>

size_t get_count(const char *s)
{
    int c=0;
  for (int i=0; i<strlen(s);i++)
    {
      if (s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        c++;
    }
    return c;
}