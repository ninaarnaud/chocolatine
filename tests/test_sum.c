/*
** EPITECH PROJECT, 2024
** B-DOP-200-MPL-2-1-chocolatine-nina.arnaud
** File description:
** test_sum.c
*/

#include <criterion/criterion.h>
#include "../src/sum.h"

Test(sum_tests, positive_numbers)
{
  cr_assert_eq(sum(2, 3), 5, "2 + 3 = 5");
}
