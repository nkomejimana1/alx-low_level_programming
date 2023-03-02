#include <stdio.h>

/**
 * main - Entry point
 *
 * This program demonstrates a pointer trick that allows the value
 * of a variable to be modified indirectly. The goal is to modify
 * the value of a[2] without directly assigning to it or using the
 * variable 'a'.
 *
 * Return: Always 0
 */


int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
