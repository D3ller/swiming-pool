#include <string.h>
#include <stdio.h>

//failling encore et encore
unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {

    unsigned int dest_size;
    unsigned int src_size;
    
    dest_size = 0;
    src_size = 0;
    
    while (*dest != '\0') {
        dest_size++;
        dest++;
    }

    while (*src != '\0') {
        src_size++;
        src++;
    }

    if(size <= dest_size) {
        return size+src_size;
    }



    return dest_size + src_size;
}

int main(void) {
    char hello[10] = "hello";
    printf("%zu\n", strlen(hello));
    char buffer[10] = "KooR";
    size_t needed = strlcat( buffer, ".fr-demo", sizeof buffer );
    printf("%zu", needed);
}