#include <unistd.h>

//finish with debugger
void ft_putnbr(int nb) {

  char result[11];
  int index;

  if(nb < 0) {
      write(1, "-", 1);
  }

  if(nb == 0) {
      write(1, "0", 1);
  }

  index = 0;
  while (nb != 0) {
      int digit = nb % 10;
      if (digit < 0)
          digit = -digit;
      char toShow = '0' + digit;
      result[index] = toShow;
      nb = nb/10;
      index++;
  }

  while (index > 0) {
      write(1, &result[index - 1], 1);
      index--;
  }
}

int main(void) {
  ft_putnbr(2147483647);
  write(1, "\n", 1);
}
