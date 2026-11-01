void ft_ultimate_div_mod(int *a, int *b) {
    int temp = *a;

    *a = temp / *b;
    *b = temp % *b;
}

int main(void) {

    int a = 4;
    int b = 30;
    ft_ultimate_div_mod(&a, &b);
    return (0);
}