#include <unistd.h>

#define NULL ((void *)0)

void print_filename(void)
{
	char *filename = __FILE__;
	while (*filename != '\0')
	{
		write(1, filename, 1);
		filename++;
	}
	write(1, filename, 1);
}

int main(void)
{
	print_filename();
	return (0);
}
