//#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) {
  int newTab[size];

  for (int i = 0; i < size; i++) {
      newTab[i] = tab[i];
  }

  /*
  printf("%i", newTab[size-1]);
  size--;
  printf("%i", newTab[size-1]);
  size--;
  printf("%i", newTab[size-1]);
  */

  while (size != 0) {
      *tab = newTab[size - 1];
      size--;
      tab++;
  }
}

int main(void) {

    int tab[] = {5, 10, 30};    
    ft_rev_int_tab(tab, 3);
    
}