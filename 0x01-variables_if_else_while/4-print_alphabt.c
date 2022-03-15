#include <stdio.h>
/**
*main - Entry point
*
*Description: print alphabets in lowercase followed
*by a newline
*
*Return: return 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
else
{
}
}
putchar('\n');
return(0);
}
