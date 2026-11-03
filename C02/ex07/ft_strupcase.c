#include <stdio.h>

char *ft_strupcase(char *str) {

    char *currentStr = str;  
    
    while (*str != '\0') {
        if(*str >= 'a' && *str <= 'z') {
            printf("%c", *str - 32);
            *str = *str - 32;
            //j'avais un bug pcq je modifie le pointeur
            // pcq a la base mon str dans main était un pointeur
        }
        str++;
    }

    return currentStr;
}

int main(void) {
    char str[] = "bonjour";
    ft_strupcase(str);
}