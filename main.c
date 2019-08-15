/* Test harness for various compiler features. */
#include "common.h"

int main(int argc, char *argv[])
{
	int ret = 0;

	if (argc < 2) {
		fprintf(stderr, "Needs arguments\n");
		return -1;
	}

	ret |= fallthrough(atoi(argv[1]));

	return 0;
}
