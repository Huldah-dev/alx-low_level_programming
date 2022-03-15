#include <stdio.h>
/**
*main - Entry point
*
*Description: print alphabets in lowercase then in uppercase followed b*a newline
*
*Return: program returns 0 (Success)
*/
int main(void)
{
char ch;
char CH;
ch = 'a';
CH = 'A';
do {
putchar(ch);
ch++;
} while (ch <= 'z');
do {
putchar(CH);
CH++;
} while (CH <= 'Z');
putchar('\n');
return (0);
}
