/*
** testex6.c for my_aff_comb2 in /home/vautri_b/test/J03
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Wed Sep 30 19:29:31 2015 bertrand vautrin
** Last update Thu Oct  1 18:39:48 2015 bertrand vautrin
*/

int	number2(char a, char b, char c, char d)
{
  my_putchar(a + 48);
  my_putchar(b + 48);
  my_putchar(32);
  my_putchar(c + 48);
  my_putchar(d + 48);
  if (a == 9 && b == 8 && c == 9 && d == 9)
    {
    }
  else
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int	my_while2(char a, char b, char c, char d)
{
  while (a <= 9)
    {
      while (b <= 9)
	{
	  while (c <= 9)
	    { 
	      while (d < 9)
		{
		  d = d + 1;
		  number2(a, b, c, d);
		}
	      c = c + 1;
	      d = 0;
	    }
	  b = b + 1;
	  c = a;
	  d = b;
	}
      a = a + 1;
      b = 0;
      c = a;
      d = b;
    }
}

int	my_aff_comb2()
{
  char	chiffre_1;
  char	chiffre_2;
  char	chiffre_3;
  char	chiffre_4;
  
  my_while2(chiffre_1, chiffre_2, chiffre_3, chiffre_4);
}
