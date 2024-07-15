/*
** EPITECH PROJECT, 2024
** B-CPE-210-BDX-2-1-solostumper06-jimmy.ramsamynaick
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

void setup(void)
{
    cr_redirect_stdout();
}

Test(fizzbuzz, should_print_correct_output, .init = setup)
{
    char *argv[] = {"program", "1", "15"};
    fizzbuzz(3, argv);
    cr_assert_stdout_eq_str("1\n2\nBuzz\n4\nFizz\nBuzz\n7\n8\nBuzz\nFizz\n11\nBuzz\n13\n14\nFizzBuzz\n");
}

void setup2(void)
{
    cr_redirect_stderr();
}

Test(fizzbuzz, should_print_error_when_second_arg_is_less_than_first, .init = setup)
{
    char *argv[] = {"program", "15", "1"};
    int return_value = fizzbuzz(3, argv);
    cr_assert_eq(return_value, 84, "Excepted return value to be 84, but was %d", return_value);
    cr_assert_stderr_eq("Error: the second parameter must be greater than the first one\n");
}
