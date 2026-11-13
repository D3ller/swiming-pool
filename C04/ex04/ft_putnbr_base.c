#include <limits.h>
#include <stdio.h>
#include <unistd.h>

void ft_putnbr_base(int nbr, char *base) {

  int base_size;
  int i;
  char table[32];
  long long_nbr;
  
  for (base_size = 0; base[base_size] != '\0'; base_size++) {
    for (int j = base_size + 1; base[j] != '\0'; j++) {
      if (base[base_size] == base[j])
        return;
    }
    if (base[base_size] == ' ' ||
        (base[base_size] >= 9 && base[base_size] <= 13) ||
        base[base_size] == '+' || base[base_size] == '-')
      return;
  }

  if (base_size <= 1)
    return;

  i = 0;
  long_nbr = nbr;

  if(long_nbr == 0) {
      write(1, &base[0], 1);
  }

  if (long_nbr < 0) {
    long_nbr *= -1;
    write(1, "-", 1);
  }

  while (long_nbr != 0) {
    table[i] = base[long_nbr % base_size];
    long_nbr /= base_size;
    i++;
  }

  while (i != 0) {
    write(1, &table[i - 1], 1);
    i--;
  }

  write(1, "\n", 1);
}

int main(void) {
  ft_putnbr_base(13, "01");                // 1101
  ft_putnbr_base(0, "01");                 // 0
  ft_putnbr_base(-8, "ABCDE");             // -BD
  ft_putnbr_base(-2147483648, "01");       // -10000000000000000000000000000000
  ft_putnbr_base(255, "0123456789ABCDEF"); // FF
}
