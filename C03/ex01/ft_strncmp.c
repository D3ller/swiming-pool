#include <stdio.h>

//fail :'(
int ft_strncmp(char *s1, char *s2, unsigned int n) {
  unsigned int index = 0;

  while (*s1 != '\0') {
    if (n == index) return 0;

      if (*s1 == *s2) {
        s1++;
        s2++;
        index++;
        continue;
      } else {
        return *s1 - *s2;
      }
  }

  return 0;
}

int main(void) { 
    printf("%i\n", ft_strncmp("abc", "abd", 2));
    printf("%i\n", ft_strncmp("abc", "abd", 3));
    printf("%i", ft_strncmp("abc", "ab", 3));
}
