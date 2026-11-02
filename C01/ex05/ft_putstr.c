#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(void) {

    char *str = "ntm la pute bardella";
    ft_putstr(str);
    
}