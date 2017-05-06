/*
** my_aff_alpha.c for my_aff_alpha in /home/vautri_b/test/J03
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Wed Sep 30 09:26:58 2015 bertrand vautrin
** Last update Thu Oct  1 18:41:03 2015 bertrand vautrin
*/

int	my_aff_alpha()
{
  int	lettre;
  
  lettre = 'a';
  while (lettre <= 'z')
    {
      my_putchar(lettre);
      lettre = lettre + 1;
    }
}
