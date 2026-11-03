#include <stdio.h>
char *ft_strcpy(char *dest, char *src) {

    char *original_dest = dest; 
    
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return original_dest;
}   

int main(void) {
    char first_letters[100];
    char *second_letters = "comment va corentin ?";
    ft_strcpy(first_letters, second_letters);
    printf("%s\n", first_letters);
}