#include <stdio.h>
int ft_atoi_base(char *str, char *base) {

  int base_size;
  int sign;
  int index;
  int j;
  int result;

  sign = 1;

  for (base_size = 0; base[base_size] != '\0'; base_size++) {
    for (int j = base_size + 1; base[j] != '\0'; j++) {
      if (base[base_size] == base[j])
        return 0;
    }
    if (base[base_size] == ' ' ||
        (base[base_size] >= 9 && base[base_size] <= 13) ||
        base[base_size] == '+' || base[base_size] == '-')
      return 0;
  }

  if (base_size <= 1)
    return 0;

  while ((*str == ' ' || (*str >= 9 && *str <= 13))) {
    str++;
  }

  while (*str == '-' || *str == '+') {
    if (*str == '-')
      sign *= -1;
    str++;
  }

  result = 0;

  for (index = 0; str[index] != '\0'; index++) {
    j = 0;
    while (base[j] != '\0' && base[j] != str[index])
      j++;
    if (base[j] == '\0')
      break;
    result *= base_size;
    result += j;
  }

  return result * sign;
}

int main(void) {
  printf("%d (attendu 11)\n", ft_atoi_base("1011", "01"));
  printf("%d (attendu 11)\n", ft_atoi_base("1011A", "01"));
  printf("%d (attendu 255)\n", ft_atoi_base("  --FF", "0123456789ABCDEF"));
  printf("%d (attendu -46)\n", ft_atoi_base("-vi", "poneyvif"));
  printf("%d (attendu 42)\n", ft_atoi_base("42", "0123456789"));
  printf("%d (attendu -42)\n", ft_atoi_base(" \t\n-+42abc", "0123456789"));
  printf("%d (attendu 0)\n", ft_atoi_base("abc", "0123456789"));
  printf("%d (attendu 0)\n", ft_atoi_base("", "01"));
  printf("%d (attendu 0)\n", ft_atoi_base("42", "0"));
  printf("%d (attendu 0)\n", ft_atoi_base("42", ""));
  printf("%d (attendu 0)\n", ft_atoi_base("42", "0123456789+"));
  printf("%d (attendu 0)\n", ft_atoi_base("42", "01234567890"));
  printf("%d (attendu 2147483647)\n",
         ft_atoi_base("7FFFFFFF", "0123456789ABCDEF"));
  printf("%d (attendu -2147483648)\n",
         ft_atoi_base("-10000000000000000000000000000000", "01"));
  printf("%d (attendu 0)\n", ft_atoi_base("- 42", "0123456789"));
  return (0);
}
