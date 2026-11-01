#include <stdio.h>


//currently don't know how to solve that...
void ft_print_combn(int n) {

    char digits[n];

    int index = 0;

    for (; n > index; index++) {
        digits[index] = '0' + 0 + index;
    }

    while (digits[index - 1] != '9') {
        digits[index - 1]++;

        for (int j = 0; j < n; j++) {
            printf("%c", digits[j]);
            if(digits[j] == '9') {
                digits[j+1]++;
            }
        }
        printf("\n");
    }
}


int main(void) {

    ft_print_combn(3);
    return (0);
    
}