void ft_swap(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main(void) {

    int a = 1;
    int b = 2;
    
    ft_swap(&a, &b);
    return (0);
}