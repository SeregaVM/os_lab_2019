#include "swap.h"

void Swap(char *left, char *right)
{
	char buf;
	buf = *left;
	*left = *right;
	*right = buf;
}
