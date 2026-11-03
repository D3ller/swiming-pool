#include <stdio.h>
int ft_count_even(int *tab, int size) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if(tab[i] % 2 == 0) {
            count++;
        }
    }

    return count;
}

int main(void) {
    int tab[] = {5, 10, -8, 13, 12};
    printf("%i", ft_count_even(tab, 5));
    return (0);
}