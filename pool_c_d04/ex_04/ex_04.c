#include <unistd.h>
int	my_swap_int(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
  return(temp);
}
void	my_sort_int_tab(int *tab, int size)
{
  int i;
  int j;
  int min;
  int max;

  i = 0;
  j = 0;
  min = 0;
  max = temp;
  while (i < size )
    {
      while (j < size)
	{
	  if (tab[i] => tab[j])
	    {
	      min = j;
	      if (min != 0)
		{
		  my_swap(tab[i], tab[min]);
		}
	    }
	  j++;
	}
      i++;
      j = 1;
      max = i;
    }
}

/*int	main()
{
  int tab[5] = {2, 1, 3, 5, 4};
  
  my_sort_int_tab(tab, 5);

  }*/
