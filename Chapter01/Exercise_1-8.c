#include <stdio.h>

main()
{
int c,nl,bl,tb;

nl = 0;
bl = 0;
tb = 0;

while((c = getchar()) != EOF)
{
	if(c == '\n')
		++nl;
	if(c == ' ')
		++bl;
	if(c == '	')
		++tb;
}
printf("Blank = %d Tab = %d New Line = %d",bl,tb,nl);
}
