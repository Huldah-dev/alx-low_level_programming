#include <stdio.h>
/**
*main - Entry point
*
*Description: Prit the alphabet in lowe*
*Return: program returns 0 (Success)
*/
int main(void)
{
char ch;
ch = 'a';
do {
putchar(ch);
ch++;
}while (ch <= 'z');
putchar('\n');
return (0);
}
