#include <stdio.h>
/* Aplicación de operadores. */
main(void)
{
int i = 15, j, k, L;
j = (15 > i--) > (14 < ++i); printf("\nEl valor de j es: %d", j);
k = ! ('b' != 'd') > (!i - 1); printf("\nEl valor de k es: %d", k);
L = (! (34 > (70 % 2)) || 0);
printf("\nEl valor de l es: %d", 1);
}