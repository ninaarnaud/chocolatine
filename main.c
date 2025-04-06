/*
** EPITECH PROJECT, 2024
** B-DOP-200-MPL-2-1-chocolatine-nina.arnaud
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main(int argc, char **argv)
{
    int a;
    int b;

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("%d\n", sum(a, b));
    return 0;
}
