#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    char letter = 'z';

    while ('a' <= letter) {
        write(1, &letter, 1);
        letter--;
    }
}