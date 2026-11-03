#include <stdio.h>

char *ft_strlowcase(char *str) {

    char *currentStr = str;  
    
    while (*str != '\0') {
        if(*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }

    return currentStr;
}

int main(void) {
    char str[] = "BONJOUR negrO 000eeee";
    ft_strlowcase(str);
    printf("%s", str);
}