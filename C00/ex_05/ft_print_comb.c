#include <unistd.h>

void ft_print_comb(void) {

    char a, b, c;

    a = '0';
    while (a <= '7') {
        b = a + 1;
    
        while (b <= '8') {
            c = b + 1;
    
            while (c <= '9') {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);

                if(a != '7' ){
                    write(2, ", ", 2);
                }
                
                ++c;
            }
            ++b;
        }
        ++a;
    }
    
}

int main(void) {
    ft_print_comb();
}

//use of help to finish (https://github.com/Mealiclay01/42-piscine/blob/main/Piscine_C/C00/ex05/ft_print_comb.c)