#include <stdio.h>

//pas totalement reussi j'avais pas le pointeur *s ce qui cassait tt 
char *ft_strstr(char *str, char *to_find) {

  char *to_find_copy = to_find;
  
  while (*str != '\0') {
      char *s;
      s = str;
      while (*to_find != '\0' && *to_find == *s) {
          to_find++;
          s++;
      }
      if (*to_find == '\0')
          return (str);
      str++;
      to_find = to_find_copy;
  }

  return (NULL);
}

int main(void) { 
    printf("\n\n%s", ft_strstr("helloba bar ntm", "bar")); 
}
