#include <stdio.h>

int count_peaks(int *tab, int size) {

    int peaks;
    int i;

    if(size < 3) {
        return 0;
    }

    peaks = 0;
    i = 1;

    while (i < size - 1) {
        if(tab[i - 1] < tab[i] && tab[i] > tab[i+1]) {
            peaks++;
        }
        i++;
    }

    return peaks;
}

int main(void) {
    int tab[] = {1, 5, 2, 8, 3};
    count_peaks(tab, 5);
}