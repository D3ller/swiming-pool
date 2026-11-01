#include <unistd.h>

void ft_putnbr(int nb) {
  if (nb == 0) {
    char zero = '0';
    write(1, &zero, 1);
    return;
  }

  if (nb == -2147483648) {
    write(1, "-2147483648", 11);
    return;
  }

  char cArray[11];
  int index = 0;
  char dash = ' ';

  unsigned int n;
      if (nb < 0) {
          write(1, "-", 1);
          n = -(unsigned int)nb;
      } else {
          n = (unsigned int)nb;
      }

  for (; n != 0; index++) {
    int newNumber = n % 10;
    char char_number = '0' + (newNumber);
    cArray[index] = char_number;
    n /= 10;
  }

  write(1, &dash, 1);
  while (index != 0) {
    write(1, &cArray[index - 1], 1);
    index--;
  }
}

int main(void) { ft_putnbr(0); }
