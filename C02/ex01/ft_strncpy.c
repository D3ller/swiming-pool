#include <stdio.h>

//completement rate mais genre 0 pointe
char *ft_strncpy(char *dest, char *src, unsigned int n) {
    
    unsigned int index = 0;
    unsigned int src_char_count = 0;
    char *original_dest = dest;
    char *original_src = src;

    while(index != n) {
        *dest = *src;
        src++;
        dest++;
        index++;
        printf("\n%i", index);
    }

    printf("\n%d num", n);
    
    while (*original_src != '\0') {
        printf("\n%c\n", *original_src);
        original_src++;
        src_char_count++;
        printf("\n%d kiki", src_char_count);
    }
    
    if(n > src_char_count) {
        printf("koko %i", src_char_count);
    }

    return original_dest;
}

int main(void) {

    char myChar[20];
    char *src = "kora";
    
    ft_strncpy(myChar, src, 7);
    //printf("%s", myChar);
}