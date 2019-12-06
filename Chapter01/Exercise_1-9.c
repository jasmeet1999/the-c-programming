#include <stdio.h>

main()
{
int c,sc;

sc = 0;
while((c = getchar()) != EOF)
{
	if(c == ' ')
		++sc;
	if(c != ' ')
		sc = 0;
	if(sc <= 1)
		putchar(c);
}
}
