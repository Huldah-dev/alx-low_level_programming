#include <stdio.h>
/**
*main - Entry point
*
*Description: Print the alphabet in lowercase then in uppercase followed*by a new line
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
putcharr('\n');
return (0);
}
