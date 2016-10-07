#include <unistd.h>

int	array_sum(int *tab, int size)
{
  int i;
  int count;

  i = 0;
  count = 0;
  if (size != 0)
    {
      while (i < size)
	{
	  count = count + tab[i];
	  i++;
	}
      my_putnbr(count);
    }
  else
    {
      my_putnbr('0');
    }
}

/*int	main()
{
  int tab[6] = { -1, 2, 4, -5, 3, 1 };
  array_sum(tab, 6);
  }*/
