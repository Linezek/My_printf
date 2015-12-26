/*
** my_putstr.c for my_putstr in /home/faure_j//rendu/lib/my
**
** Made by jordan faure
** Login   <faure_j@epitech.net>
**
** Started on  Mon Oct 24 10:06:56 2011 jordan faure
** Last update Fri Nov 13 16:23:58 2015 Antoine Galpin
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}
