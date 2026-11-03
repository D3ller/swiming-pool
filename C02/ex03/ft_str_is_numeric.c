#include <stdio.h>
int ft_str_is_numeric(char *str) {
    if(*str == '\0') return (1);

    while (*str != '\0') {
        if(*str >= '0' && *str <= '9') {
            str++;
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    char *ptr = "1-2";
    printf("%i", ft_str_is_numeric(ptr));
}