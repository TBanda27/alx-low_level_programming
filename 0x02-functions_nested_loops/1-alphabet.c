#include "main.h"
/**
 * print_alphabet - entre point
 * Return: Always 0 (Success)
*/
int main()
{
  print_alphabet();
  return (0);
}
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
    _putchar(a);
	}
  _putchar('\n');
}
