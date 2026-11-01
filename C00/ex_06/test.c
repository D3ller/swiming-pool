#include <stdio.h>
#include <unistd.h>

// a refaire (jai pas reussi j'ai fait trop complexe pr pas grand chose)
void ft_print_comb2(void) {
    int first = 0;
    int second;
    
    for (; first < 99; first++) {
        for (second = first + 1; second < 100; second++) {
            printf("%02d %02d\n", first, second);
        }
    }
}

int main(void) {
    ft_print_comb2();
    return (0);
}

