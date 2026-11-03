int ft_str_is_lowercase(char *str) {
    if(*str == '\0') return (1);

    while (*str != '\0') {
        if(*str >= 'a' && *str <= 'z') {
            str++;
            continue;
        } else {
            return (0);
        }
    }

    return 1;
}