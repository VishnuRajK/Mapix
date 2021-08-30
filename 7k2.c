//https://www.codewars.com/kata/5a58d46cfd56cb4e8600009d
unsigned halving_sum(unsigned n) {
  int i=1,sum =0, c = n;
  
  while (c>0)
    {
      c=n/i;
      sum = sum + c;
      
      i=i*2;
      
    }
  return sum;
}