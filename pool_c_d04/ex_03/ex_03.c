#include <unistd.h>

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
    {
      i++;
    }
  my_putnbr(i);
}

/*int	main()
{
  char *str = "Test compteur longueur string";
  my_strlen(str);
  }*/

