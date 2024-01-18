#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Compile for 32-bit architecture
	system("gcc -m32 -o size32 6-size.c 2> /tmp/32");

	// Run the compiled binary for 32-bit
	system(".size32");

	// Compile for 64-bit architecture
	system("gcc -m64 -o size64 6-size.c 2> /tmp/64");

	// Run the compiled binary for 64-bit
	system("./size64");

	// Return 0 to indicate successful execution
	return 0;
}
