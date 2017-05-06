/*
** my_aff_comb.c for my_aff_comb in /home/vautri_b/test/J03
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Wed Sep 30 11:18:55 2015 bertrand vautrin
** Last update Thu Oct  1 18:36:36 2015 bertrand vautrin
*/

int	 number1(char a, char b, char c)
{
  my_putchar(a);
  my_putchar(b);
  my_putchar(c);
  if (a != '7')
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int	my_while1(char e, char f, char g)
{
  while (e < '7')
    {
      while (f < '8')
        {
          while (g < '9')
            {
              g = g + 1;
              if (e < f && f < g && e < g)
                {
                  if (e != f && f != g && e != g)
		    {
		      number1(e, f, g);
                    }
                }
            }
          f = f + 1;
          g = f;
        }
      e = e + 1;
      f = e + 1;
      g = f + 1;
    }
  number1(e, f, g);
}

int	my_aff_comb()
{
  char	number_1;
  char	number_2;
  char	number_3;
  
  number_1 = '0';
  number_2 = '1';
  number_3 = '2';
  number1(number_1, number_2, number_3);
  my_while1(number_1, number_2, number_3);
}
