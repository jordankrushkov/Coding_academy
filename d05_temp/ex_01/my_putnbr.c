#include <unistd.h>
int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_pow(int num, int pui)
{
  int res;

  res = 1;
  while ( pui > 0 )
    {
      res = res * num;
      pui--;
    }
  return(res);
}
void	my_putnbr(int n)
{
  int i;
  int j;
  int num1;
  int tmp;

  i = 0;
  tmp = n;
  if (n == 0)
    {
      my_putchar(48);
      return;
    }
  else if (n < 0)
    {
      n = n * -1;
      my_putchar(45);
    }
   
  while(tmp != 0)
    {
      tmp = tmp / 10;
      i++;
    }
  j = 1;
  num1 = 0;
  while(j <= i)
    {
      num1 =  n / my_pow(10, i-j);
      n = n % my_pow(10, i-j);
      my_putchar(num1+48);
      j++;
    }
}
