#include <stdio.h>
int ft_str_is_printable(char *str) {
    if(*str == '\0') return (1);
    
    while (*str != '\0') {
        if((int)*str >= 32 && (int)*str <= 126) {
            str++;
            continue;
        } else {
            return (0);
        }
    }

    return 1;
}

int main(void) {
    char *str = "$ehehehdsjjs€";
    ft_str_is_printable(str);
}