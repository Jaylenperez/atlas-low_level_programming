/**
 * print_name - prints a name using a function pointer
 * @name: name to print
 * @f: function pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
