/*
** my_put_nbr.c for my_put_number in /home/vautri_b/test
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Thu Oct  1 09:14:35 2015 bertrand vautrin
** Last update Thu Oct  1 19:46:13 2015 bertrand vautrin
*/

int	negatifs(int nb)
{
  my_putchar('-');
  nb = nb * -1;
  if (nb > 9)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else 
    {
      my_putchar(nb + 48);
    }
}

int	particular(int nb)
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

int	my_put_nbr(int nb)
{  
  if (nb == -2147483648)
    {
      particular(nb);
    }
  else
    {
      if (nb < 0)
	{
	  negatifs(nb);
	}
      else
	{
	  if (nb > 9)
	    {
	      my_put_nbr(nb / 10);
	      my_put_nbr(nb % 10);
	    }
	  else
	    {
	      my_putchar (nb + 48);
	    }
	}
    }
}
