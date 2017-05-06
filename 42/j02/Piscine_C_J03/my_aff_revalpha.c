/*
** my_aff_revalpha.c for my_aff_revalpha in /home/vautri_b/test/J03
** 
** Made by bertrand vautrin
** Login   <vautri_b@epitech.net>
** 
** Started on  Wed Sep 30 10:09:43 2015 bertrand vautrin
** Last update Wed Sep 30 12:12:52 2015 bertrand vautrin
*/
int	my_aff_revalpha()
{
  int	lettre;
  
  lettre = 'z';
  while (lettre >= 'a')
    {
      my_putchar(lettre);
      lettre = lettre - 1;
    }
}
