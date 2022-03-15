#include <stdio.h>
/**
*main - Entry point
*
*Description: print lowercase alphabets in reverse
*
*Return: return 0
*/
int main(void)
{
char ch;
ch = 'z';
do {
putchar(ch)
ch--;
} while(ch >= 'a');
putchar('\n');
return (0);
}
