/*
** EPITECH PROJECT, 2019
** malloc
** File description:
** lil_big_tests
*/

#include <criterion/criterion.h>
#include "my.h"

Test(test, test_strcmp)
{
    cr_expect(my_strcmp("test", "test") == 0);
}

Test(test, test_strcat)
{
    cr_expect_str_eq(my_strcat("test", "strcat"), "teststrcat");
}