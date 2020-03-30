void ft_striter(char *s, void (*f)(char *))
{
  if (s == NULL || f == NULL)
    return ;
  while (s != NULL)
    f(s++);
}
