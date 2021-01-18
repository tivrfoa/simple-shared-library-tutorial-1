#include <stdio.h>
#include "lib/lib1.h"

int main()
{
	printf("total_foo = %d\n", total_foo);
	printf("MAX_FOO = %d\n", MAX_FOO);

	int x = 10, y = 3;
	printf("foo(%d, %d) = %d\n", x, y, foo(x, y));

	foo_struct fs = { .x = 3, .y = 33.3 };
	printf("foo(%f, %d) = %d\n", fs.y, fs.x, foo(fs.y, fs.x));


	return 0;
}
