//https://www.codewars.com/kata/57a1d5ef7cb1f3db590002af
int fib(int n)
{
  int a = 0, b = 1, s, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     s = a + b;
     a = b;
     b = s;
  }
  return b;
}