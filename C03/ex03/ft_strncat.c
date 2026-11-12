#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb) {

    char *copy = dest;
    unsigned int index = 0;
    
    while(*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        if(index == nb) break;
        *dest = *src;
        src++;
        dest++;
        index++;
    }
    *dest = '\0';

    return copy;
}

int main(void) {
    char ongle[80];
    ongle[0] = 'p';
    ft_strncat(ongle, "wowow", 2);

    printf("%s", ongle);
}