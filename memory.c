#include <stdlib.h>

#define ONE_K 1024

int main()
{
	char *some_mem;
	char *scan_ptr;

	some_mem = (char *)malloc(ONE_K);
	if (some_mem == NULL)
		exit(EXIT_FAILURE);

	scan_ptr = some_mem;
	while (1)
	{
		*scan_ptr = '\0';
		scan_ptr++;
	}
	free(some_mem);
	exit(EXIT_FAILURE);

	return 0;
}
