/*
** my_strlen.c for my_strlen in /home/vautri_b/test
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Thu Oct  1 22:10:53 2015 bertrand vautrin
** Last update Thu Oct  1 23:21:16 2015 bertrand vautrin
*/

int	my_strlen(char *str)
{
  char	a;
  int	b;
  
  a = *str;
  b = 1;
  while (a != '\0')
    {
      str = str + 1;
      a = *str;
      b = b + 1;
    }
  return (b);
}
