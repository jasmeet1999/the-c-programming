#include <stdio.h>

main()
{
int c,printed;

while((c = getchar()) != EOF)
{
	printed = 0;
	if(c == '\t')
	{
		printf("\\t");
		printed = 1;
	}
	if(c == '\b')
	{
		printf("\\b");
		printed = 1;
	}
	if(c == '\\')
	{
		printf("\\\\");
		printed = 1;
	}
	if(printed == 0)
		putchar(c);
}
}
