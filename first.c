#include <stdio.h>

void primero(void) __attribute__((constructor));

void primero(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
