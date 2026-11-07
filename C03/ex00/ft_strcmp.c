#include <stdio.h>
int ft_strcmp(char *s1, char *s2) {

  while (*s1 != '\0') {
    if (*s1 == *s2) {
      s1++;
      s2++;
      continue;
    } else {
      return *s1 - *s2;
    }
  }

  return 0;
}

/**
 * 
 • strcmp("abc", "abc") → '0' - '0' = 0
 • strcmp("abc", "abd") → 'c' (99) - 'd' (100) = -1
 • strcmp("abe", "abc") → 'e' (101) - 'c' (99) = 2
 */

int main(void) {
    printf("%d\n", ft_strcmp("abc", "abc"));
    printf("%d\n", ft_strcmp("abc", "abd"));
    printf("%d", ft_strcmp("abe", "abc"));
}
