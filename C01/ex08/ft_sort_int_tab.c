#include <stdio.h>

//j'ai salement bloquer sur cette exo alors que c'et un truc de neuille
void ft_sort_int_tab(int *tab, int size) {

  for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - 1; j++) {
          if(tab[j] > tab[j+1]) {
              int oldValue = tab[j+1];
              tab[j+1] = tab[j];
              tab[j] = oldValue;
          }
      }
  }

  for (int i = 0; i < size; i++) {
      printf("%i\n", tab[i]);
  }
}

int main(void) {

  int tab[] = {5, 30, 10, 120, 19, -20};
  ft_sort_int_tab(tab, 6);
}
