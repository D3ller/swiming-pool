#include <stdio.h>

int ft_strlen(char *str) {

    int i = 0;

    while (*str != '\0') {
        i++;
        str++;
    }

    return i;
}


int main(void) {
    char *str = "my_string"; 
    int hey = ft_strlen(str);
    printf("%i characters", hey);
}