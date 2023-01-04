#include "main.h"
/**
* _print_rev_recursion - prints char sequence  in a recursively reversed manner
* @s: address of string
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
