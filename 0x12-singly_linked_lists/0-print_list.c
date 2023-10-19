#include "list.h"
/**
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (*h)
	{
		_putchar(h[i]);
	}
	return (i);
}
