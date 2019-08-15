#include "common.h"

static int noinline test(int var)
{
	int flags = 0;

	switch (var) {
	case 1:
		flags |= 100;
	case 2:
		flags |= 200;
		/* fall through */
	case 3:
		flags |= 300;
		__attribute__((__fallthrough__));
	case 4:
		flags |= 400;
		break;
	default:
		flags |= 1;
	}

	return flags;
}

int fallthrough(int var)
{
	return (test(var) == 2);
}
