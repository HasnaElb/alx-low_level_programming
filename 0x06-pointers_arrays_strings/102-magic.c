#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 98;
	p = &n;
	/*
	 * write your line of code here...
	 * remember
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
