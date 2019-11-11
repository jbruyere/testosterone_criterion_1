/*
** EPITECH PROJECT, 2019
** malloc
** File description:
** basi_tests
*/

#include <criterion/criterion.h>
#include "my.h"

Test(basic_tests, test_op)
{
    cr_expect(do_op(1, '+', 1) == 2);
}