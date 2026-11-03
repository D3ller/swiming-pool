#include <stdio.h>
int ft_str_is_alpha(char *str) {
    //int is_alphanumeric = 0;
    
    if(*str == '\0') {
        return 1;
    }

    while (*str != '\0') {
        printf("%c", *str);
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            str++;
            continue;
        } else {
            return (0);
        }
    }

    return 1;
}


int main(void) {
    char *ptr = "pioupiouNTMPIOU-";
    printf("%i", ft_str_is_alpha(ptr));
}