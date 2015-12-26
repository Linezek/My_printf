/*
** my_strlen.c for strlen in /home/galpin_a/rendu/printf_ptrfct/lib/my
**
** Made by Antoine Galpin
** Login   <galpin_a@epitech.net>
**
** Started on  Fri Nov 13 14:57:08 2015 Antoine Galpin
** Last update Fri Nov 13 14:59:06 2015 Antoine Galpin
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
}
