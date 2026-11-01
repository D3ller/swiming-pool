#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;

    printf("%d %d", *div, *mod);
}

int main(void) {
    int a = 49;
    int b = 23;
    int div = 42;
    int mod = 42;

    ft_div_mod(a, b, &div, &mod);
}