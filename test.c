#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p = NULL;
	char *q = NULL;
	
	char pp[20];
	char qq[20];

	snprintf(pp, 20, "Hello world!");
	printf("pp=%s\n", pp);
	p = pp;
	q = qq;

	while(*p)
	{
		//*q++ = *p++;

		*q = *p;
		p++;q++;
	}
	printf("qq=%s\npp=%s\n", qq, pp);
}
