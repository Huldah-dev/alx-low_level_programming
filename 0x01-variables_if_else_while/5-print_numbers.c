#include <stdio.h>
/**
*main - Entry point
*
*Description: print all single digit numbers of base 10
*
*Return: return 0
*/
int main(void)
{

int x;
do {
printf("%d", x);
x++;
} while (x <= 9);
putchar('\n');
return (0);
}
