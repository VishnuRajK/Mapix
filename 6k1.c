//https://www.codewars.com/kata/514b92a657cdc65150000006
int solution(int number) {
    int c=0;
  for (int i=0; i<number; i++)
    {
      
      if(i%3 == 0 || i%5 == 0)
        c=c+i;
      
    }
  if (number<0)
    return 0;
  else
  return c;
}