/*
** EPITECH PROJECT, 2024
** fizzbuzz
** File description:
** fizzbuzz
*/

#include "../my.h"
#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int argc, char **argv) {
    int term1 = atoi(argv[1]);
    int term2 = atoi(argv[2]);

    if (term2 <= term1) {
        printf("Error: the second parameter ");
        printf("must be greater than the first one\n");
        return 84;
    }
    for (; term1 <= term2; term1 += 1) {
         if (term1 % 3 == 0 && term1 % 5 == 0)
            printf("FizzBuzz\n");
        else if (term1 % 3 == 0)
            printf("Buzz\n");
        else if (term1 % 5 == 0)
            printf("Fizz\n");

        else
            printf("%d\n", term1);
    }
    return 0;
}
