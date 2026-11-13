#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str) {

  int sign = 1;
  int result;

  result = 0;
  while ((*str == ' ' || (*str >= 9 && *str <= 13))) {
    str++;
  }

  while (*str == '-' || *str == '+') {
    if (*str == '-')
      sign *= -1;
    str++;
  }

  while (*str >= 48 && *str <= 57) {
    result *= 10;
    result += *str - '0';
    str++;
  }

  return result * sign;
}

int main(void) {
  printf("\n%d", ft_atoi("   -42abc"));
  printf("\n%d", atoi("   -42abc"));
}
