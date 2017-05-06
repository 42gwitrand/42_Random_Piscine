/*
** my_aff_chiffre.c for my_aff_chiffre in /home/vautri_b/test/J03
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Wed Sep 30 10:20:43 2015 bertrand vautrin
** Last update Thu Oct  1 18:09:55 2015 bertrand vautrin
*/

int	my_aff_chiffre()
{
  int	chiffre;
  chiffre = '0';
  while (chiffre <= '9')
    {
      my_putchar(chiffre);
      chiffre = chiffre +1;
    }
}
