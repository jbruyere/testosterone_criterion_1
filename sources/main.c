#include "my.h"

int main()
{
    char *str1 = "mystr";
    char *str2 = "cat";
    char *str3 = "cat";
    int nb1 = 12;
    int nb2 = 3;

    printf("mystrcat : %s\n", my_strcat(str1, str2));
    printf("%s == %s -> %d\n", str2, str3, my_strcmp(str2, str3));
    printf("%d + %d = %d\n", nb1, nb2, do_op(nb1, '+', nb2));
    printf("%d - %d = %d\n", nb1, nb2, do_op(nb1, '-', nb2));
    printf("%d * %d = %d\n", nb1, nb2, do_op(nb1, '*', nb2));
    printf("%d / %d = %d\n", nb1, nb2, do_op(nb1, '/', nb2));
    printf("%d modulo %d = %d\n", nb1, nb2, do_op(nb1, '%', nb2));
    return 0;
}