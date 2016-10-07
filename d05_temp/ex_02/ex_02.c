#include <unistd.h>
#include <stdio.h>

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\0')
    {
      i++;
    }

  return(i);
}

char	*my_strstr(char *hay, char *need)
{
  int i;
  int j;
  int debut;
  int size_hay;
  int size_need;

  size_hay = my_strlen(hay);
  size_need = my_strlen(need);
  i = 0;
  j = 0;
  debut = -1;
  if (size_hay != 0 && size_need != 0)
    {
      while(i < size_hay)
	{
	  if (hay[i] == need[j])
	    {
	      if (debut == -1)
		{
		  debut = i;
		}
	     
	      j++;
	    }
	  else
	    {
	      if (j == size_need )
		{
		  return(&hay[debut]);
		}
	      j = 0;
	      debut = -1;
	    }
	  i++;
	}
    }
    return(NULL);
}
/*
int	main()
{
  char *hay = "Bonjour babebonbaba45";
  char *need = "baba";

  char *temp = my_strstr(hay, need);
  if (temp != NULL)
    printf("%s\n", temp);
    else
   printf("NULLLLL\n");
  
   }*/
