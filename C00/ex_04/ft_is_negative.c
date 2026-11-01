#include <unistd.h>

void ft_is_negative(int n) {
    char character = 'P';
    
    if (n < 0) {
        character = 'N';
    }

    write(1, &character, 1);
}

int main(void) {
    ft_is_negative(-10);
    ft_is_negative(10);

    return (0);
}